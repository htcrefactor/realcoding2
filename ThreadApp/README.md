# Project: Thread App
## Multitasking
- Multitasking is the state of running multiple tasks simultaneously.
- Multitasking can occur even when there is only one CPU core.
- The kernel assigns threads to CPU(s) by using a scheduler algorithm.
- Threads of lower order can access data defined in higher order threads.
- It is more difficult to implement multitasking using processes, hence we will try multitasking using threads.
- Threads cannot be run on different processes. IPC *(Inter-Process Communication)* is oftenly used to overcome this issue when using processes.

## Multithreading vs Multiprocessing
- Switching between threads is much faster than switching between processes.
- Threads can share data saved in memory of identical processes.
- Competition oftenly occurs between threads to access shared data.
- Mutex is an object in a program that serves as a lock, used to negotiate mutual exclusion among threads.
- Sometimes sharing data can yield unexpected results. *Check 1.mytwothread.c*

##