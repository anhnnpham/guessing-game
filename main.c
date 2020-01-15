#include "main.h"
#include "function.c"

int main()
{
    int randNum = 0;
    int difficultMax = difficultySelection();

    srand(time(NULL));
    randNum = (rand() % difficultMax) + 1;

    int *addrandNum = &randNum;
    guessingGame(addrandNum);

    again();
    return 0;
}