int difficultySelection()
{
    int difficultMax = 0;
    char difficulty[10];
    printf("Easy (e): 1 -> 100, Medium (m): 1 -> 1000, Hard (h): 1 -> 10000?\n");
    scanf("%s", difficulty);
    
    if (strcmp(difficulty, "e") == 0)
    {
        difficultMax = 100;
    }
    else if (strcmp(difficulty, "m") == 0)
    {
        difficultMax = 1000;
    }
    else if (strcmp(difficulty, "h") == 0)
    {
        difficultMax = 10000;
    }
    return difficultMax;
}

void guessingGame(int *randNum)
{
    int guessedNum = 0, counter = 0;
    printf("Guess it!\n");
    do
    {
        scanf("%d", &guessedNum);
        if (guessedNum < *randNum)
        {
            printf("Higher !\n");
        }
        else if (guessedNum > *randNum)
        {
            printf("Lower !\n");
        }
        counter++;
    } while (guessedNum != *randNum);
    printf("%d tries.\n", counter);
}

void again()
{
    char yesNo[5];
    printf("Again? 'y' or 'n'.\n");
    scanf("%s", yesNo);
    if (strcmp(yesNo, "y") == 0)
    {
        main();
        return;
    }
    else
    {
        return;
    }
}
