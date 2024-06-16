#ifndef GAME
#define GAME

typedef struct player {
  int age;
  int height;
  char name[1024];
  // TODO: add the rest of the player struct
} Player;

// GAME FUNCTIONS =====================
Player build_player();
// TODO: add the rest of the game functions

// UTILITY FUNCTIONS ==================
// prints str character by character
void slow_print(char str[]);

#endif // !GAME
