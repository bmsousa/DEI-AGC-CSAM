## AFL Fuzzing Applications

American Fuzzy Lop (AFL) is “a security-oriented fuzzer that employs a novel type of compile-time instrumentation and genetic algorithms to automatically discover clean, interesting test cases that trigger new internal states in the targeted binary.” 

It leverages genetic algorithms to construct inputs to the program and learn code paths.
It also provides compiler instrumentation and applies multiple mutation strategies.


## Exercises

### Quickstart

Simple C program with bugs manipulating strings. Intends to introduce the basics of AFL usage.

### Harness

A test harness is a collection of software and test data configured to test a program unit by running it under varying conditions and monitoring its behavior and outputs.
For AFL, it is required to have a program that receives input from a file, such as STDIN, and can be executed. In this way, harness  as a wrapper to libraries that are meant to be tested.

It manages the reading of input from test cases and forwards the information to the functions.

Also, can be used to optimize the efficiency of AFL by applying mechanisms such as persistent mode, that allows to reuse parts of the initialization of the program across multiple executions.

### Exercise 1

Combination of the previous learned techniques to explore libxml2, a XML parser library.
In this case, you should develop a harness and execute the fuzzing of the library.

### Tools

To explore the bugs identified and understand whether they are security vulnerabilities, one can use gdb.
gdb is a C debugger very used to help in development and testing.
