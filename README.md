# Binary fuzzing learning repo
### I'm trying to learn black box binary fuzzing by learning to fuzz simple targets which add compexities step by step
I'm thinking of using libAFL + libafl_qemu but this might change. Goal is to do all the tasks listed below with *coverage guided* fuzzing.

## Rough idea of my goals:
1. Fuzz simple binary which takes file as an argument. Main challenge is to get qemu coverage working.
2. Fuzz the first challenge without disk I/O somehow. Maybe syscall hooks.
3. Fuzz a specific thread in a forking + multithreaded application.
4. Fuzz an application that reads input from UDP port, without actually needing our input to go over network.
5. Fuzz encrypted/encoded packets by disabling encryption in binary? 
6. Fuzz forking + network targets in with small overhead. 

### all these should be coverage guided 



