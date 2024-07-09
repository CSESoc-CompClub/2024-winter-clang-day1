#include "game.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

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

