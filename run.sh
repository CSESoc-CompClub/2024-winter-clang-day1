#!/bin/bash

# Get tmp file name
out_file=$(mktemp -q "./out.XXXXXX")
#remove tmp file (even if killed by ctrl+c)
trap 'rm -f "$out_file"' EXIT

# Compile main.c
gcc src/main.c src/game.c src/game_globals.c -o "$out_file"

# Run
"./$out_file"


