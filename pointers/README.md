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

## Function Pointers

