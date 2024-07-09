#include "game.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void test_vehicle_selection(Player player) {
    if (strcmp(player.vehicle, vehicles[0]) == 0) {
    } else if (strcmp(player.vehicle, vehicles[1]) == 0) {
    } else if (strcmp(player.vehicle, vehicles[2]) == 0) {
    } else {
        slow_print("> Agent your choose_a_vehicle function seems to be broken, it's too dangerous to move on\n");
        exit(1);
    }
}

