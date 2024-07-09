#ifndef GAME
#define GAME

typedef struct player {
  int age;
  int height;
  char name[1024];
  char vehicle[1024];
} Player;

// GAME FUNCTIONS =====================
Player build_player();
void travelling(Player player);
void choose_a_vehicle(Player player, char* environment);

// UTILITY FUNCTIONS ==================
/**
 * print char by char for aesthetics
 */
void slow_print(const char *format, ...);

#endif // !GAME
