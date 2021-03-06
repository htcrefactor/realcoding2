# battle_c
Maintainer: Hyung-Taik Choi

# Project: optionTest
## Raspberry Pi
1. Connect to a local Raspberry Pi on the same network by using `ssh` or TeraTerm (default ID/PW is pi/raspberry).
2. Use `ifconfig` in Raspberry Pi terminal to see network configuration.
3. Use `df-h` in Raspberry Pi terminal to see storage size.
4. "Standard Directory": Directory system that is followed as a norm for a given system.  
    (Linux: bin, boot, lib, home, ... / Windows: Users, Program Files, Windows, Temp, ...)
5. `su - <username>`: Switch User
6. `sudo -i`: Login to `root` account, shell symbol changes from `$` to `#`.
7. `whoami`: Display's current username.
8. `passwd`: Set password for current user.

## Interpreter vs Compiler
### Interpreter
- Translates program one statement at a time.
- Interpreters usually take less amount of time to analyze source code.
- Interpreters have slower overall execution time compared to compilers.
- No intermediate object code, which makes it memory efficient.
- JavaScript, Python, Ruby use interpreters.

### Compilers
- Scans the entire program and translates it as a whole into machine code.
- Compilers usually take more amount of time to analyze source code.
- Compilers have faster overall execution time compared to interpreters.
- Generates intermediate object code which reqires linking, which is memory-consuming.
- C, C++, Java use compilers.

## C Preprocessor
1. GCC compile options  
    - GCC options can be used to handle the processing system to a designated level.  
        - `gcc -E`: Pre-process  
        - `gcc -S`: Compile  
        - `gcc -c`: Assemble  
        
    - GCC options also has various usages that can help developers during development.
        - `gcc -o <file>`: Output to `<file>`.
        - `gcc -g`: Dump debug information.
        - `gcc -I<dir>`: Add a directory to search for header files (default: `/usr/include` and `working directory`).
        - `gcc -l<library>`: Link `<library>` during linking process.
        - `gcc -L<dir>`: Add a directory to search for libraries.
        - `gcc -D<macro>`: Define a macro in runtime.
        - `gcc -O<level>`: Set optimization level (0 <= level <= 3)
        - `gcc -Wall`: Print all warning messages that `gcc` can display.
        - `gcc -v`: Print executables with version information.

## Project Result
### Optimization with -O command
![image](images/optimization-result.png)

| Optimization | Elapsed Time |
| -- | -- |
| True | 0.000001 sec |
| False | 13.087765 sec |

Test was made by comparing the elapsed time to run fixed point arithmetic INT_MAX times.