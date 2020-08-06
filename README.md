# battle_c
Maintainer: Hyung-Taik Choi

# Projects
## three_files
### C Preprocessor  
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
3. Macro Definition