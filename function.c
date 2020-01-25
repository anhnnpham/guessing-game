int difficultySelection()
{
    char userChoice[2]; // for user's input character
    // 3 levels: 100, 1000 & 10000
    printf("Easy (e): 1 -> 100, Medium (m): 1 -> 1000, Hard (h): 1 -> 10000? ");
    scanf("%s", userChoice);
    
    // you can also use switch case
    if (strcmp(userChoice, "e") == 0)
    {
        return 100;
    }
    else if (strcmp(userChoice, "m") == 0)
    {
        return 1000;
    }
    else if (strcmp(userChoice, "h") == 0)
    {
        return 10000;
    }
}

void guessing(const int *numberIn)
{
    int guessedNumber = 0, counter = 0;
    printf("Guess it!\n");
    
    // keep looping until the right number is entered
    do
    {
        scanf("%d", &guessedNumber);
        if (guessedNumber < *numberIn)
        {
            printf("Higher !\n");
        }
        else if (guessedNumber > *numberIn)
        {
            printf("Lower !\n");
        }
        counter++; // count how many tries it took
    } 
    while (guessedNumber != *numberIn);
    printf("%d tries.\n", counter); // print out
}

bool isAgain()
{
    char yesOrNo[2];
    printf("Play again? 'y' or 'n': ");
    scanf("%s", yesOrNo);
    if (strcmp(yesOrNo, "y") == 0)
    {   // rerun main function
        return 1;
    }
    else
    {   // if choose 'n'
        return 0;
    }
}
