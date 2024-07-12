# Intro to C - Foundations

## Setting Up!

To set up, please open up your terminal and run the following command.

``` bash
$ ./day1
```

This command will set up the codebase you will be working on today and another executable file called `run.sh`. Whenever you want to compile and run the code you have written, you should run the following command on your terminal.

```bash
$ ./run,sh
```

Furthermore, we have also provided a completed version of the game as a sample solution for you to check your work with. However, this sample solution is only provided to you in raw binary which is not human readable (I am not kidding, I encourage you to try) but can be executed by running the following command.

```bash
$ ./sample_game
```

If you are having trouble setting up, please ask one of our mentors to assist you!

## Utility Function
Already done for you is an epic function called `slow_print` and for the purposes of making our game extra cool today and we shall be using it instead of `printf` whenever we want to log text onto the terminal.

```c
// The parameter of slow_print can be a regular string
slow_print("my cool string");

// or it can be a formatted string
slow_print("my favourite number is: %d\n", 13);
```

## Building your player!
Now it is time for you to create your agent!

Navigate to the `game.c` file and find the code block marked `build_player` which should current look like.

```c
Player build_player() {
  Player player;
  
  // TODO: Ask the user for and fill out the name, age, and height
  slow_print("Finish me!");

  return player;
}
```

To complete this function, your program should ask the user for their initials, age and height. (Clue: How can we use scanf to get these results?)

Once the function is completed, the player creation sequence should look something like the following.

```
> Please choose your assigned identity for the mission. With a top-secret mission, please ensure your true identity is not revealed.

> What should we call you player?

JL

> What is your age?

20

> What is your height?

200

> Understood, welcome to the game JL. We've recorded your height as 200 and age as 20.
```

## Choose a vehicle!
Getting around the city is going to be difficult without a vehicle and you are completely broke. Thankfully, your boss is a man/woman in finance, trust fund, 6'5 and has blue eyes and is willing to supply you with a sweet ride.

Your task is to navigate to the `choose_a_vehicle` function which currently looks like the below.

```c
void choose_a_vehicle(Player player, char *environment) {

  slow_print("> You have arrived at %s.\n", environment);
  slow_print("> Select a vehicle for your travels.\n");
  slow_print("> - (h) Hoverboard\n");
  slow_print("> - (q) Quantum High Speed Bike\n");
  slow_print("> - (n) Nano Diffusion Jetpack\n");

  // TODO: Ask the player for their vehicle of choice, then fix the slow_print
  // statement below with the correct fields.

  slow_print("> You have chosen <VEHICLE> for your travels in <ENVIRONMENT>!\n");
  slow_print("> Good choice agent, you've made it to the next location.\n");
}

```

Your code should wait for an input from the user then use conditional statements to correctly assign the desired vehicle to the Player struct.

## Travelling!
Your final task for today is to finish the `travelling` function which is also located in `game.c`.

```c
void travelling(Player player) {
  char **places = malloc(MAX_PLACES * sizeof(char *));

  // TODO: Ask player to input MAX_PLACES number of places

  for (int i = 0; i < MAX_PLACES; i++) {
    choose_a_vehicle(player, places[i]);
  }

  slow_print("Congratulations, you've beat the game!");
}
```

This function should ask the user for several location names and then store them within the `places` array which has already be alocated for you. Importantly, we should only ask the user for `MAX_PLACES` inputs as anymore will cause the program to crash (worthless brownie points if you know why this happens). 

If your function is completed correctly the program should output the following.
```
> Welcome to CyberNEx Corp candidate, today is your first day on the job and your final test, please check the file linked to neurochip. It includes all the information and details of mission REDACTED.

> You've been task with a mission to take out REDACTED

> Please choose your assigned identity for the mission. With a top-secret mission, please ensure your true identity is not revealed.

> What should we call you player?

$ JL

> What is your age?

$ 20

> What is your height?

$ 200

> Understood, welcome to the game JL. We've recorded your height as 200 and age as 20.

> Enter place 0:

$ Rizz

> Enter place 1:

$ Mewing

> Enter place 2:

$ Streak

> Enter place 3:

$ Sigma
```