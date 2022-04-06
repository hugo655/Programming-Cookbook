/*
Compile:
g++ main_argv.cpp -o main_argv

Usage:
./main_argv word1 word2 1 2 3

Description:
 This is a skeleton of a code for
taking arguments from command line and using them
in a C++ code routine

Author: Hugo G.
*/
#include <iostream>

using namespace std;

int main (int argc, char *argv[]){ // Note #1
  cout << "The number of argument is: "
       << argc << "\n";
  
  for(int i=0; i < argc; i++){
    cout << argv[i] << "\n";
  }

  return 0;
}

/*
###########
## NOTES ##
###########

Note #1 : ARGumentCount (argc) and ARGumentVector (argv)
These are special variables that stores the number and
the content of the argument list passed-in to the program
via command line interface

*/
