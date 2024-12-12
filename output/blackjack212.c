#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

int control(int playerTotal, int dealerTotal)
{
    if (playerTotal == 21 && dealerTotal != 21)
    {
        printf("You won the game. BlackJack.\n");
        return 0;
    }
    if (dealerTotal == 21 && playerTotal != 21)
    {
        printf("You lost the game. Admin made BlackJack!\n");
        return 0;
    }
    if (playerTotal > 21)
    {
        printf("You lost the game. You Exceeded 21. Your total is %d\n", playerTotal);
    }
    return 0;
}
int main()
{
    printf("Welcome to BlackJack!\n\n");

    int playerDeck[10];
    int dealerDeck[10];
    

    for (int i = 0; i < 10; i++)
    {
        srand(time(NULL));
        playerDeck[i] = rand() % 11;
        dealerDeck[i] = rand() % 11;
    }

    int playerTotal = playerDeck[0] + playerDeck[1];
    int dealerTotal = dealerDeck[0] + dealerDeck[1];

    printf("Your cards are %d and %d.\n Your total is %d.\n", playerDeck[0], playerDeck[1], playerTotal);

    control(playerTotal, dealerTotal);

    printf("If you want to hit press 1, if you want to stay please press 2.\n\n");

    int choice;
    scanf("%d", &choice);

    if (choice == 2)
    {
        printf("Your cards are %d and %d.\n Your total is %d.\n\n", playerDeck[0], playerDeck[1], playerTotal);

        control(playerTotal, dealerTotal);
        if (playerTotal < dealerTotal)
        {
            printf("You lost the game. Dealer's number is bigger than yours.");
            return 0;
        }
        if (playerTotal > dealerTotal)
        {
            printf("You won the game. your number is bigger than dealers.");
            return 0;
        }
    }

    if (choice == 1)
    {
        playerDeck[2] += playerTotal;
        dealerDeck[2] += dealerTotal;

        control(playerTotal, dealerTotal);
        if (playerTotal < dealerTotal)
        {
            printf("You lost the game. Dealer's number is bigger than yours.");
            return 0;
        }
        if (playerTotal > dealerTotal)
        {
            printf("You won the game. your number is bigger than dealers.");
            return 0;
        }
    }
}



