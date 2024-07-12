// [MAIN.C]
// This program was written by <YOUR-NAME-HERE>
// on <INSERT-DATE-HERE>

// A program that initialises and runs our game.

// IMPORTS ====================================================================
// [DO NOT TOUCH]
#include "game.h"
#include <stdio.h>
#include <string.h>

// ============================================================================
int main(void) {
  // Prints intro message
  slow_print(
      "> Welcome to CyberNEx Corp candidate, today is your first day on the "
      "job and your final test, please check the file linked to neurochip. "
      "It includes all the information and details of mission REDACTED.\n");

  slow_print("> You've been task with a mission to take out REDACTED\n");

  slow_print("> Please choose your assigned identity for the mission. With a "
             "top-secret mission, please ensure your true identity is not "
             "revealed.\n");

  // Build player
  Player player = build_player();
  slow_print("> Understood, welcome to the game %s. We've recorded your height as %d and age as %d.\n", 
    player.name, 
    player.height, 
    player.age);

  // Game Loop
  travelling(player);
}

