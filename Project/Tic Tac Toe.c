#include <stdio.h>

char board[3][3]; // 3x3 game board
char currentPlayer = 'X';

void initializeBoard();
void printBoard();
int makeMove(int row, int col);
char checkWinner();
int isDraw();

int main() {
    int row, col;
    char winner = ' ';

    initializeBoard();

    printf("🎮 Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        printf("Player %c, enter row (0-2) and column (0-2): ", currentPlayer);
        scanf("%d%d", &row, &col);

        if (makeMove(row, col)) {
            winner = checkWinner();
            if (winner != ' ') {
                printBoard();
                printf("🎉 Player %c wins!\n", winner);
                break;
            } else if (isDraw()) {
                printBoard();
                printf("🤝 It's a draw!\n");
                break;
            }
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            printf("❌ Invalid move! Try again.\n");
        }
    }

    return 0;
}
void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = '-';
}
void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf(" %c ", board[i][j]);
        printf("\n");
    }
    printf("\n");
}
int makeMove(int row, int col) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == '-') {
        board[row][col] = currentPlayer;
        return 1;
    }
    return 0;
}
char checkWinner() {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '-') ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '-')) {
            return currentPlayer;
        }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-')) {
        return currentPlayer;
    }

    return ' ';
}
int isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == '-')
                return 0;
    return 1;
}
