# Simple Shell

### Description
    Simple Shell is a program that is used to interpret commands from the terminal.

### Environment
    Simple Shell was created and tested to work on Ubuntu 14.04 LTS

### File Contents

	This repository contains the following files:

| File | Description |
| :--- | :---------- |
| shell.c | Executes the commands passed in via command line |
| shell.h | Contains all the necessary headers, functions and structures used to make the shell run |
| token_line.c | removes spaces, tabs, and newlines from prompt before, between, and after command is entered  |
| string_func.c | Contains all the functions necessary to for the shell to interpret the arguments from the prompt |
| print_func.c | Prints the prompt |
| execute.c | Executes command if it exists |
| builtin_func.c | Checks for builtin functions in the environment |
| memory.c | Fill memory with constant bytes |
| env.c | Splits the argument into pieces, obtains environment variable, and locates PATH to execution file |
| _atoi.c | converts arguments to integers for exit status |
| signal.c | handles ctrl + c (makes it no longer exit) |
| AUTHORS | contains contact information of all contributors to this project |

### Example
This is an example of how to compile, start, and use the Simple Shell.

```
user@ubuntu:~$ gcc *.c -o hsh
user@ubuntu:~$ ./hsh
$ /bin/ls
Desktop           Music
Documents         Pictures
Downloads         Videos
$ ls
Desktop           Music
Documents         Pictures
Downloads         Videos
```

### Authors
* [**Armando Nuno**](https://github.com/mandonuno)
* [**Leon Cheung**](https://github.com/hiddenjem245)