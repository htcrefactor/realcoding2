# battle_c
Maintainer: Hyung-Taik Choi

# Project: three_files
## C Preprocessor  
1. Include header files
    - Header files are included as text.
    - Add header files using `#include <stdio.h>` or `#include "file.h"`.
    - Include location using `gcc -i` in terminal.
    - Prevent multiple includes using below code.
    ```
    // Use "pragma"
    #pragma once
    
    // Use conditional compilation
    #ifdef _MATH_ 
    #include <math.h> 
    #endif
    ```
<br>

2. Conditional Compilation
    - Can select code to compile using conditions.
    ```
    #ifdef PRINT_ID
    
        printf("Name" $s\n", global_name);
        return 1;
    
    #else
    
        printf("ID: %d\n", global_id);
        return 0;
    
    #endif
    ```
    - Directives that can be used: `#if`, `#ifdef`, `#ifndef`, `#elif`, `#else`, and `#endif`.
<br>

3. Macro Definition
    - Macros are defined using the syntax below.
    ```
    // Objects
    #define <identifier> <replacement token list>
    #define PI 3.141592
    
    // Function-like macros
    #define <identifier>(<parameter list>) <replacement token list>
    #define f(a) ((a) * (a))
    
    // This is not a good habit
    // Expected: b = (20 + 13) * (20 + 13)
    // Actual: b = 20 + 13 * 20 + 13
    #define f(a) a*a
    b = f(20 + 13)
    ```
    - There is a special order of expansion for function macros.
    - `__FILE__`, `__LINE__` are examples of special macros and directives.
<br>

4. GCC compile options
    - GCC options can be used to handle the processing system to a designated level.
        - `gcc -E`: Pre-process
        - `gcc -S`: Compile
        - `gcc -c`: Assemble
    
    - GCC options also has various usages that can help developers during development.
        - `gcc -o <file>`: Output to `<file>`.
        - `gcc -g`: Dump debug information.
        - `gcc -I<dir>`: Add a directory to search for header files.
        - `gcc -l<library>`: Link `<library>` during linking process.
        - `gcc -L<dir>`: Add a directory to search for libraries.
        - `gcc -D<macro>`: Define a macro in runtime.
        - `gcc -O<level>`: Set optimization level (0 <= level <= 3)
        - `gcc -Wall`: Print all warning messages that `gcc` can display.
        - `gcc -v`: Print executables with version information.
    

## Project Result
![Result Image](three_files/result/results.PNG)

1. Compile as `id` using `gcc main.c func.c -o id`.
2. Result successfully display's ID because PRINT_ID is not defined.
3. Compile as `name` using `gcc main.c func.c -o name`.
4. Result successfully display's name because PRINT_ID was defined during runtime.