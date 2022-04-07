# Simple Multi File Project!

When we start coding in C/C++ we usually go for a single file approach. There is nothing wrong
with it, as long as the programmer knows how to work with a multi-file project. I do think that
in some cases one does not have to over-engineer things. 

This project is based on [this Jacob Sober Video](https://www.youtube.com/watch?v=NeOTr0u7ALk). It
consists of a Util's library that include useful functions that can be reused, such as a function
to calculate the mean of a series of numbers. 

## Header Boilerplates

Header files are interfaces that include that include a bundle of functions that can be reused.
Keeping the implementation of the functions separated from the "*interface-sheet*" it is a 
standard good practice. 

The typical Header file contains a chunk of code that might frighten some people.

```
#ifndef UTIL_H
#define UTIL_H

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

// Your code here 


#ifdef __cplusplus
}
#endif // __cplusplus

#endif //UTIL_H
```

To understand, one have to think that each `#ifndef`/`#ifdef` matches with a `#endif` . The first
statement `#ifndefi UTIL_H` server as a mechanism to prevent pre-compilers to copy&paste the same
code each time it hits a `#include "UTIL_H"` statement.

The second statement, `#ifdef __cplusplus` is quite bit more complex and has to do with compiling 
C code in C++ compilers. Detailed explanation is beyond the scope of this text, for now, one should
know that natively C-Compiler creates object files differently than C++ Compiler which may lead to 
errors in Linkage stage. To solve this, one might need to add this mechanism so that the full 
compilation process is compatible. 
