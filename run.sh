#!/bin/bash

# Get tmp file name
out_file=$(mktemp -q "./out.XXXXXX")

# Remove
trap 'rm -f "$out_file"' EXIT 

# Compile main.c
gcc src/main.c src/game.c -o "$out_file"

# Run
"./$out_file"


