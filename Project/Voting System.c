#include <stdio.h>
#define CANDIDATE_COUNT 3
int votes[CANDIDATE_COUNT] = {0};

void DisplayCandidates();
void CastVote();
void DisplayVoteCounts();
void ShowWinner();

int main()
{
    int choice;
    do
    {
        printf("\n--- Mini Voting System ---\n");
        printf("1. Cast Vote\n2. View Vote Count\n3. View Winner\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            CastVote();
            break;

        case 2:
            DisplayVoteCounts();
            break;

        case 3:
            ShowWinner();
            break;

        case 4:
            printf("Exiting voting system.\n");
            break;

        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    } while (choice != 4);
}

void DisplayCandidates()
{
    printf("-----Available Candidates-----\n\n");
    printf("1. BJP\n");
    printf("2. Congress\n");
    printf("3. AAP\n");
}

void CastVote()
{
    int choice;
    DisplayCandidates();
    printf("Enter your voting number (1 - %d): ", CANDIDATE_COUNT);
    scanf("%d", &choice);

    if (choice >= 1 && choice <= CANDIDATE_COUNT)
    {
        votes[choice - 1]++;
        printf("Thanks forvoting\n");
    }
    else
    {
        printf("Invalid Choice, Try Again");
    }
}

void DisplayVoteCounts()
{
    printf("-----Vote Counts-----\n\n");
    printf("BJP: %d votes\n", votes[0]);
    printf("Congress: %d votes\n", votes[1]);
    printf("AAP: %d votes\n", votes[2]);
}

void ShowWinner()
{
    int max = votes[0], winner = 0;
    for (int i = 1; i < CANDIDATE_COUNT; i++)
    {
        if (votes[i] > max)
        {
            max = votes[i];
            winner = i;
        }
    }

    int count = 0;
    for (int i = 0; i < CANDIDATE_COUNT; i++)
    {
        if (votes[i] == max)
        {
            count++;
        }
    }

    if (count == 1)
    {
        printf("\nWinner: ");
        if (votes[0] == max)
            printf("BJP");
        else if (votes[1] == max)
            printf("Congress");
        else if (votes[2] == max)
            printf("AAP");
        printf(" with %d votes!\n", max);
    }
    else
    {
        printf("\nIt's a tie between the following candidates with %d votes:\n", max);
        if (votes[0] == max)
            printf("- BJP\n");
        if (votes[1] == max)
            printf("- Congress\n");
        if (votes[2] == max)
            printf("- AAP\n");
    }
}