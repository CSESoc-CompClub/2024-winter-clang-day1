// [GAME.C]
// This program was written by <YOUR-NAME-HERE>
// on <INSERT-DATE-HERE>

// A program that initialises our player, and runs the game loop!

// IMPORTS ====================================================================
// [DO NOT TOUCH]
#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

// CONSTANTS =================================================================
int MAX_PLACES = 4;
int MAX_PLACE_LENGTH = 12;

// GAME FUNCTIONS =============================================================
/*
  [build_player]
  Initialises an creates our player with a name, age, and height 
*/
Player build_player() {
  Player player;
  
  // TODO: Ask the user for and fill out the name, age, and height
  slow_print("Finish me!");

  return player;
}

/*
  [travelling]
  Asks player for MAX_PLACES to travel to, 
  then asks player to choose a vehicle to traverse between each destination
*/
void travelling(Player player) {
  char **places = malloc(MAX_PLACES * sizeof(char *));

  // TODO: Ask player to input MAX_PLACES number of places

  for (int i = 0; i < MAX_PLACES; i++) {
    choose_a_vehicle(player, places[i]);
  }

  slow_print("Congratulations, you've beat the game!");
}

/*
  [choose_a_vehicle]
  Given a player and one destination's name, prompts them to
  select a mode of transport, and take our user to the destination!
*/
void choose_a_vehicle(Player player, char *environment) {

  slow_print("> You have arrived at %s.\n", environment);
  slow_print("> Select a vehicle for your travels.\n");
  slow_print("> - (h) Hoverboard\n");
  slow_print("> - (q) Quantum High Speed Bike\n");
  slow_print("> - (n) Nano Diffusion Jetpack\n");

  // TODO: Ask the player for their vehicle of choice, then fix the slow_print
  // statement below with the correct fields.

  slow_print("> You have chosen <VEHICLE> for your travels in <ENVIRONMENT>!\n");
  slow_print("> Good choice agent, you've made it to the next location.\n");
}

// UTILITY FUNCTIONS ==========================================================
/*
  [slow_print]
  A function that helps you print out text character by character.
  You can pass a regular OR formatted string in:
    -> slow_print("my cool string");
    -> slow_print("my favourite number is: %d\n", 13);
*/
void slow_print(const char *format, ...) {
  char buffer[1024]; // Ensure this buffer is large enough for your needs
  va_list args;
  va_start(args, format);
  vsnprintf(buffer, sizeof(buffer), format, args);
  va_end(args);

  for (int i = 0; i < strlen(buffer); i++) {
    putchar(buffer[i]);
    fflush(stdout);
    usleep(10000);
  }
  putchar('\n');
}
