#include "game.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// GAME FUNCTIONS =====================

/**
 * build the player character based on user input
 */
Player build_player() {
  Player player;

  slow_print("> What should we call you player?\n");
  char name[1024];
  scanf("%s", name);
  strcpy(player.name, name);

  // TODO: the rest of building player

  return player;
}

void travelling(Player player) {
  // TODO: implement this
}

char* choose_a_vehicle() {
  // TODO: implement this
  return NULL;
}

// UTILITY FUNCTION
void slow_print(char *str) {
  for (int i = 0; i < strlen(str); i++) {
    putchar(str[i]);
    fflush(stdout);
    usleep(10000);
  }
  putchar('\n');
}

