#pragma once

#ifndef GUESSING_GAME
#define GUESSING_GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // random generator
#include <string.h> // strcmp

int difficultySelection();	  
void guessingGame(int *randNum);
void again();

#endif // GUESSING_GAME