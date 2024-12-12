#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

int printRandom(int upperBound, int lowerBound)
{
    int random_number1 = rand() % (upperBound - lowerBound + 1) + lowerBound;
}

int control(int sumPlayer, int sumAdmin)
{
    if (sumPlayer == 21 && dealerTotal != 21)
    {
        printf("You won the game. BlackJack.\n");
        return 0;
    }
    if (sumAdmin == 21) 
    {
        printf("You lost the game. Admin made BlackJack!\n");
        return 0;
    }
    if (sumPlayer > 21)
    {
        printf("You lost the game. You Exceeded 21. Your total is %d\n", sumPlayer);
    }
}

int makeachoice(int sumPlayer, int deckPlayer[])
{

    sumPlayer = deckPlayer[2] + sumPlayer;
    printf("Your card is %d\n", deckPlayer[2]);
}

int main()
{
    int sumAdmin = 0;
    int sumPlayer = 0;

    int deckAdmin[10];
    int deckPlayer[10];

    deckAdmin[0] = printRandom(11, 1);
    deckAdmin[1] = printRandom(11, 1);
    deckAdmin[2] = printRandom(11, 1);
    deckAdmin[3] = printRandom(11, 1);
    deckPlayer[0] = printRandom(11, 1);
    deckPlayer[1] = printRandom(11, 1);
    deckPlayer[2] = printRandom(11, 1);
    deckPlayer[3] = printRandom(11, 1);

    sumAdmin = deckAdmin[0] + sumAdmin;
    sumAdmin = deckAdmin[1] + sumAdmin;

    sumPlayer = deckPlayer[0] + sumPlayer;
    sumPlayer = deckPlayer[1] + sumPlayer;

    printf("Here is your deck.\n");
    printf("%d, %d\n", deckPlayer[0], deckPlayer[1]);

    control(sumPlayer, sumAdmin);

    int choice;

    if (sumPlayer < 21)
    {
        printf("Do you wanna hit or miss? Press 1 for hit and press 2 for miss\n");
        scanf("%d", &choice);

        if (choice == 2)
        {
            return 0;
        }

        if (choice == 1)
        {
            makeachoice(sumPlayer, deckPlayer);
            control(sumPlayer, sumAdmin);
        }
    }
}
