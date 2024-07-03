#include "game.h"

Location locations[] = {
  {"CyberNEx Corp Training Facility"},
  {"CyberNEx Corp Headquarters"},
  {"CyberNEx Corp Research Lab"},
  {"CyberNEx Corp Server Room"},
  {"CyberNEx Corp Data Centre"}
};

char vehicles[][1024] = {
  "Quantum High Speed Car",
  "CyberNEx Corp Hoverbike",
  "Nano Diffusion Jetpack"
};

Mission missions[] = {
    {"Cyber Counter", "Mission 1 description", 1},
    {"Glowing Greetings", "Mission 2 description", 1},
    {"Neon Sum", "Mission 3 description", 2},
    {"Encode Keypad", "Mission 4 description", 2}
    // {"Mission Ocean", "Mission 5 description", 3},
    // {"Mission Swamp", "Mission 6 description", 3},
    // {"Mission Taiga", "Mission 7 description", 4},
    // {"Mission Cave", "Mission 8 description", 4},
    // {"Mission Nether", "Mission 9 description", 5},
    // {"Mission End", "Mission 10 description", 5}
    };