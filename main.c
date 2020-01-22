#include "main.h"
#include "function.c"

int main()
{
    // get the chosen difficulty's highest number
    int difficultMax = difficultySelection();

    srand(time(NULL)); // get seed
    int randNumber = (rand() % difficultMax) + 1; // from 1 to the highest number

    // pointer can't change the generated number
    const int* numberPtr = &randNumber;
    guessing(numberPtr);

    replay(); // option to replay
    return 0;
}