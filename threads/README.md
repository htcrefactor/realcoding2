# Project: Threads
## Threads
In computer science, a thread of execution is the smallest sequence of programmed instructions that can be managed independently by a scheduler, which is typically a part of the operating system.

![Threads](220px-Multithreaded_process.svg.png)

## Processes vs Threads
It is true that processes and threads share many similar concepts but differ in some perspectives.
- Processes are typically independent, while threads exist as subsets of a process
- Processes carry considerably more state information than threads, whereas multiple threads within a process share process state as well as memory and other resources
- Processes have separate address spaces, whereas threads share their address space
- Processes interact only through system-provided inter-process communication mechanisms
- Context switching between threads in the same process typically occurs faster than context switching between processes

## Mutex
Competition for shared resources can negatively impact performance. Also, threads accessing shared resources can also create undefined behavior. To resolve this issue, we can implement a special padlock for resources, and we call this a mutex.

- A thread that needs to maintain ownership of a shared resource can lock the mutex to prevent other threads from accessing and modifying the resource.
- A thread that finishes its task can unlock the mutex to release ownership of a shared resource, allowing other threads to access and modify the resource.

![Mutex Lock](threads/mutex-lock.png)

## Project Result
![Description](threads/thread-assignment-result.png)