# battle_c
Maintainer: Hyung-Taik Choi

# Project: CMake
## How to Install
`sudo apt install cmake`
`cmake CMakeLists.txt` or `cmake .` // Assuming CMakeList is located in dir .
`ls -R`
`make` or `cmake --build .` or `cmake . -Bbuild` or `make -C build`// Assuming Makefile is located in dir 

`make clean` or `make -C build clean` or `cmake --build build/ --target clean` / `cmake --build build/ --target help`
`rm -r CMakeFiles`
`rm -r cmake_install.cmake`

`chmod a+x myrm.sh`
`ls -l`
`cd make`
`../myrm.sh`