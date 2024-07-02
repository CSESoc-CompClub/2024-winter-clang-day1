#include "game.h"
#include <stdio.h>
#include <string.h>

int main(void) {
  // Intro message
  slow_print(
      "> Welcome to CyberNEx Corp candidate, today is your first day on the "
      "job and your final test, please check the file linked to neurochip. "
      "It includes all the information and details of mission REDACTED.\n");
  slow_print("> You've been task with a mission to take out REDACTED\n");
  slow_print("> Please choose your assigned identity for the mission. With a "
             "top-secret mission, please ensure your true identity is not "
             "revealed.\n");
  Player player = build_player();
  char player_info_string[1024];
  sprintf(player_info_string, "> Understood, welcome to the game %s. We've recorded your height as %d and age as %d.\n", player.name, player.height, player.age);
  slow_print(player_info_string);
  travelling(player);
}
