#include "game.h"
// #include "testing_files.c"
#include <stdio.h>
#include <string.h>

int main(void) {
  // Intro message
  slow_print(
      "> Welcome to CyberNEx Corp candidate, today is your first day on the "
      "job and your final test, please check the file linked to neurochip. "
      "It includes all the information and details of mission REDACTED.\n");

  slow_print("> Before we get you to your final training mission we need to get you prepped up.\n");

  Player player = build_player();
  
  // TODO: fill in based on the spec
  // create and pick a vehicle
  slow_print("> A vehicle will be provided on behalf of the company,"
             " please choose the one that most suits your driving style.\n");
  strcpy(player.vehicle, choose_a_vehicle());

  //?? check if vehicle has been chosen properly
  //test_vehicle_selection(player);

  slow_print("> You have chosen the %s, good choice.\n", player.vehicle);

  slow_print("> Now that you have chosen your vehicle, you can start your missions.\n");

  slow_print("> Please select the mission you want to complete:\n");
  choose_a_mission();
  // player.current_mission = choose_a_mission();
  //?? check if mission has been chosen properly

  slow_print("> You have chosen the mission: %s, please navigate to the mission file.\n Good luck Agent!\n", player.current_mission.name);
}
