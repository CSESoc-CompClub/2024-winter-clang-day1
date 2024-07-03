#include "game.h"
#include <stdio.h>
#include <stdarg.h>
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
  slow_print("> How old are you?\n");
  int age;
  //?? may need error checking here
  scanf("%d", &age);
  player.age = age;

  slow_print("> How tall are you?\n");
  int height;
  //?? may need error checking here
  scanf("%d", &height);
  player.height = height;

  slow_print("> What is your favourite food?\n");
  char food[1024];
  scanf("%s", food);
  strcpy(player.favourite_food, food);


  
  return player;
}

void travelling(Player player) {
  // TODO: implement this
}

char* choose_a_vehicle() {
  slow_print("> Agent your first task is to fix the vehicle selection system."
             " Please navigate to game.c and complete the task \n");

  // TODO: implement this
  // SOLUTION START// 
  slow_print("> Choose a vehicle:");
  slow_print("> %d. %s\n", 1, vehicles[0]);
  slow_print("> %d. %s\n", 2, vehicles[1]);
  slow_print("> %d. %s\n", 3, vehicles[2]);

  int choice;
  while (1) {
    slow_print("> Enter your choice:");
    scanf("%d", &choice);
    if (choice == 1 || choice == 2 || choice == 3) {
      break;
    }
    slow_print("> Invalid choice, please try again.");
  }
  if (choice == 1) {
    return vehicles[0];
  } else if (choice == 2) {
    return vehicles[1];
  } else {
    return vehicles[2];
  }
  // SOLUTION END// 
}

void choose_a_mission() {
  slow_print("Please select the mission you want to complete:");

  for (int i = 0; i < 10; i++) {
    slow_print("%d.\tCodename: %-20sDifficulty: %d\n\tDescription: %s\n", i + 1, missions[i].name, missions[i].difficulty, missions[i].description);
  }
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


// Function to save player progress
// void save_progress(Player player) {
//     FILE *file = fopen("savefile.txt", "w");
//     if (file == NULL) {
//         printf("Error opening save file for writing.\n");
//         return;
//     }
//     fprintf(file, "%s\n%d\n%d\n%s\n%s\n%s\n", player.name, player.age, player.height, player.favourite_food, player.vehicle, player.current_location.name);
//     fclose(file);
// }

// // Function to load player progress
// Player load_progress() {
//     Player player;
//     FILE *file = fopen("savefile.txt", "r");
//     if (file == NULL) {
//         printf("No save file found, starting a new game.\n");
//         // Initialize player with default or empty values
//         strcpy(player.name, "");
//         strcpy(player.vehicle, "");
//         return player;
//     }
//     fscanf(file, "%1023s\n%d\n%d\n%1023s\n%1023s\n%1023s\n", player.name, player.age, player.height, player.favourite_food, player.vehicle, player.current_location.name);
//     fclose(file);
//     return player;
// }

