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

  slow_print("> What should we call you player?\n");
  char name[1024];
  scanf("%s", name);
  printf("\n");
  strcpy(player.name, name);

  slow_print("> What is your age?\n");
  scanf("%d", &player.age);
  printf("\n");

  slow_print("> What is your height?\n");
  scanf("%d", &player.height);
  printf("\n");

  return player;
}

/*
  [travelling]
  Asks player for MAX_PLACES to travel to, 
  then asks player to choose a vehicle to traverse between each destination
*/
void travelling(Player player) {
  char **places = malloc(MAX_PLACES * sizeof(char *));

  for (int i = 0; i < MAX_PLACES; i++) {
    places[i] = malloc((MAX_PLACE_LENGTH + 1) * sizeof(char));
    char enter_place_str[1024];
    sprintf(enter_place_str, "> Enter place %d: \n", i);
    slow_print(enter_place_str);
    scanf("%s", places[i]);
    printf("\n");
  }

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
  char selection;

  slow_print("> You have arrived at %s.\n", environment);
  slow_print("> Select a vehicle for your travels.\n");
  slow_print("> - (h) Hoverboard\n");
  slow_print("> - (q) Quantum High Speed Bike\n");
  slow_print("> - (n) Nano Diffusion Jetpack\n");

  scanf(" %c", &selection);
  printf("\n");

  if (selection == 'h') {
    strcpy(player.vehicle, "Hoverboard");
  } else if (selection == 'q') {
    strcpy(player.vehicle, "Quantum High Speed Bike");
  } else if (selection == 'n') {
    strcpy(player.vehicle, "Nano Diffusion Jetpack");
  } else {
    strcpy(player.vehicle, "Super Secret Skateboard");
  }

  slow_print("> You have chosen %s for your travels in %s!\n", player.vehicle, environment);
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
