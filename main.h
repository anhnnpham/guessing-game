#pragma once

#ifndef GUESSING_GAME
#define GUESSING_GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // random generator (srand & rand)
#include <string.h> // strcmp
#include <stdbool.h>
int difficultySelection();	  
void guessing(const int *randNum);
bool isAgain();
int main();

#endif // GUESSING_GAME