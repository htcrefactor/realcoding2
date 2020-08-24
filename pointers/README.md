# battle_c
Maintainer: Hyung-Taik Choi

# Project: Pointers
Pointers are a way to locate data using memory addresses. We can save or modify data using pointers by accessing the memory area using the address data saved in pointers.

## Basic Pointer Arithmetics
- `&`: Returns the address of the following item. 
```
int variable = 0;
int* pointer = &variable;
```

- `*`: Returns the data saved in the pointing locaation.
```
int variable = 0;
int* pointer = &variable;
int star_operator = *pointer;

// Prints 0
printf("%d\n", star_operator);
```

- `+`: Binary operator that returns the pointer value incremented according to size of data type.
```
int variable = 0;
int* pointer = &variable;
int* plus_operator = pointer + 1;

// Prints sizeof(int)
printf("%d\n", plus_operator - pointer);
```

## Noun-Adjective Form
- `int const`: A constant integer
- `int const *`: A (variable) pointer to a constant integer
- `int * const`: A constant pointer to a (variable) integer
- `int * const *`: A pointer to a constant pointer to an integer
- `int const * *`:  A pointer to a pointer to a constant integer
- `int const * const *`: A pointer to a constant pointer to a constant integer

## Void Pointers
Pointers normally have a void* type. Each pointer is usually casted to fit the data it represents. Hence, pointers have the same size regardless of the data it represents, and the size is equal to sizeof(void*).
This value is usually 4 bytes for 32-bit operating systems and 8 bytes for 64-bit operating systems.

## Arrays and Pointers
Pointers and arrays have many similar aspects. They both support pointer arithmetics but have one different aspect. First, the name of an array *decays* to a pointer that points to the first index `array[0]` of the array. The address value of a pointer can be changed, but the address value of an array cannot be changed, hence an array is `const`.

## Function Pointers
Function pointers are pointers that point to a function, not variables. This is because every component running in a program are actually all saved in a specific location in memory. Thus, locating that memory will allow the programmer to run the function. Function pointers are delcared as below.  
<br>
*return-type* (**name-of-function**) ( *parameters* )  
<br>
```
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

void main (void) {
    // return-type: int
    // name-of-function: function_pointer
    // parameters: int, int
    int (*function_pointer)(int, int);
    
    // Allocate address of predefined function maximum() to function_pointer
    function_pointer = &maximum
    
    // res = 2
    int res = function_pointer(1, 2);
}
```

Like the example below, function pointers can also be utilized to selectively choose a certain function when organized in an array.  
`double (*f[10])(int const *a, double (*g[10])(double h));`
