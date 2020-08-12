# battle_c
Maintainer: Hyung-Taik Choi

# Project: Make
## Make
- `Make` is a tool which controls the generation of executables and other non-source files of a program from the program's source files.
- `Make` uses information from a file named `makefile` which lists each of the non-source files and how to compute it from other files. `Make` does not operate without `makefile` so it is mandatory.
- `Make` is not limited to a particular programming language because the `makefile` specifies which shell commands to use to compute executables.
- `Make` is not limited to building a package. Any routinely process that can be wrote down step-by-step can be the objective of `Make`.

## Makefile
- `Makefile`s are consisted of *rules*, *targets*, and *dependencies*.
- A *rule* is an exact description of what `Make` should do written in `makefile` notations.
- A *target* is the yield of a *rule*, hence *target* is made after following the process described in *rule*.
- A *dependency* is the resources that a *rule* needs to compute the *target*. 

```
// This is a rule
target:   dependencies ...
          commands
          ...
```
To sum up, *dependencies* are manipulated as stated in the *rule* to create the *target*.

### Makefile Macros

## Project Result
