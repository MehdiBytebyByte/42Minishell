# 42Minishell

## Overview

Minishell is a custom implementation of a basic shell, developed to understand shell mechanics, process management, and system programming in C.
(This project is a team project in the 42 cursus so it was collaboratively made by me and my teammate @1234yahya1234)

## Features

- Command parsing and execution
- Built-in commands support
- Input/output redirection
- Pipeline operations
- Environment variable handling
- Signal management

## Requirements

- C compiler (gcc/clang)
- Make
- Unix-like operating system

## Compilation

```bash
make
```

## Running the Shell

```bash
./minishell
```

## Supported Built-in Commands

- `echo`
- `cd`
- `pwd`
- `export`
- `unset`
- `env`
- `exit`

## Supported Redirections

- `>` (output redirection)
- `>>` (append output)
- `<` (input redirection)
- `<<` (here document)

## Functionality

The shell supports:
- Executing system commands
- Chaining commands with pipes
- Managing environment variables
- Handling signals (SIGINT, SIGQUIT)


ps (this project is not perfect contributions are welcome )
