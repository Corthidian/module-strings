
#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H

#include <stdio.h>
#include <string.h>

void initializeBlankString(int length, char *str);
void printWithSpaces(const char *str);
int revealGuessedLetter(const char *solution, char *revealed, char guessedLetter);
int checkGuess(const char *str1, const char *str2);
void startGame(char word[25]);
void drawHorse(int guessedSoFar, int allowedGuesses);
void clearScreen();

#endif 