#pragma once

#ifndef GUESSING_GAME
#define GUESSING_GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // random generator (srand & rand)
#include <string.h> // strcmp

int difficultySelection();	  
void guessing(const int *randNum);
void replay();
int main();

#endif // GUESSING_GAME