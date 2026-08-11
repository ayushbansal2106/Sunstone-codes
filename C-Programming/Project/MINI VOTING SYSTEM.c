#include<stdio.h>
#include<string.h>

#define CANDIDATE_COUNT 5
#define MAX_NAME_LENGTH 100

char candidates[CANDIDATE_COUNT][MAX_NAME_LENGTH] = {"BJP", "AAP", "JJP","Congress","SWP"};
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

    return 0;
}

void DisplayCandidates()
{
    printf("-----Available Candidates-----\n\n");
    for (int i = 0; i < CANDIDATE_COUNT; i++)
    {
        printf("%d. %s\n",i+1, candidates[i]);
    }
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
    for (int i = 0; i < CANDIDATE_COUNT; i++)
    {
        printf("%s: %d votes\n",candidates[i], votes[i]);
    }
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
        for (int i = 0; i < CANDIDATE_COUNT; i++)
        {
            if (votes[i] == max)
            {
                printf("\nWinner: %s with %d votes!\n", candidates[i], max);
                break;
            }
        }
    }
    else
    {
        printf("\nIt's a tie between the following candidates with %d votes:\n",max);
        for (int i = 0; i < CANDIDATE_COUNT; i++)
        {
            if (votes[i]==max)
            {
                printf("- %s\n",candidates[i]);
            }
        }
    }
}