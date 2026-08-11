#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 30
#define HEIGHT 20
#define MAX_SNAKE_SIZE 100

int x, y, fruitX, fruitY, score;
int tailX[MAX_SNAKE_SIZE], tailY[MAX_SNAKE_SIZE];
int tailLength;
int gameOver;
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum Direction dir;

void gotoxy(int x, int y) {
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void hideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void drawBoard() {
    gotoxy(0, 0); // move cursor to top-left corner
    for (int i = 0; i <= HEIGHT; i++) {
        for (int j = 0; j <= WIDTH; j++) {
            if (i == 0 || i == HEIGHT || j == 0 || j == WIDTH)
                printf("#");
            else if (i == y && j == x)
                printf("O"); // snake head
            else if (i == fruitY && j == fruitX)
                printf("*"); // fruit
            else {
                int print = 0;
                for (int k = 0; k < tailLength; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o");
                        print = 1;
                    }
                }
                if (!print) printf(" ");
            }
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}


void setup() {
    gameOver = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitX = rand() % (WIDTH - 2) + 1;
    fruitY = rand() % (HEIGHT - 2) + 1;
    score = 0;
    tailLength = 0;
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameOver = 1; break;
        }
    }
}

void logic() {
    int prevX = tailX[0], prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < tailLength; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT: x--; break;
        case RIGHT: x++; break;
        case UP: y--; break;
        case DOWN: y++; break;
    }

    // Game over if hitting wall
    if (x <= 0 || x >= WIDTH || y <= 0 || y >= HEIGHT)
        gameOver = 1;

    // Game over if hitting tail
    for (int i = 0; i < tailLength; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    // Eat fruit
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % (WIDTH - 2) + 1;
        fruitY = rand() % (HEIGHT - 2) + 1;
        tailLength++;
    }
}

int main() {
    hideCursor();   // <-- hide the cursor
    setup();
    while (!gameOver) {
        drawBoard();
        input();
        logic();
        Sleep(100); // Adjust speed
    }

    printf("\nGame Over! Final Score: %d\n", score);
    return 0;
}
