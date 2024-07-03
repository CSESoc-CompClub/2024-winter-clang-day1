#ifndef GAME
#define GAME

// STRUCTS ============================
typedef struct location {
  char name[1024];
  // char description[1024];
} Location;

typedef struct mission {
  char name[1024];
  char description[1024];
  int difficulty;
} Mission;

typedef struct player {
  int age;
  int height;
  char name[1024];
  char favourite_food[1024];
  // TODO: add the rest of the player struct
  char vehicle[1024];
  Mission current_mission;
} Player;

// GAME FUNCTIONS =====================
Player build_player();
void travelling(Player player);
char* choose_a_vehicle();
void choose_a_mission();
// TODO: add the rest of the game functions

// UTILITY FUNCTIONS ==================
// prints str character by character
void slow_print(const char *format, ...);

//GAME ARRAYS
extern Location locations[];

extern char vehicles[][1024];

extern Mission missions[];

#endif // !GAME

