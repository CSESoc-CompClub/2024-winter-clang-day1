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

## Travelling!