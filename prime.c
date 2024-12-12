
int main()
{
    int sumAdmin = 0;
    int sumPlayer = 0;
    int upperBound = 10;
    int lowerBound = 1;

    int random_number1 = rand() % (upperBound - lowerBound + 1) + lowerBound;
    int random_number2 = rand() % (upperBound - lowerBound + 1) + lowerBound;
    sumAdmin = random_number1 + random_number1;
    if (sumPlayer == 21)
    {
        printf("You won the game. BlackJack!");
    }
}

