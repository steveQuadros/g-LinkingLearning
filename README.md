# Learnings
- Install folly library `brew install folly` 
- includes using `-I` flag need to follow the directory structure  
	- ex. files in: `mathutil/include/add.hpp`, when compiling with `g++ -I. demo/src/main.cpp add.o -lfolly --std=c++17` you would need to use `#include <mathutil/include/add.hpp>`  
- use the `-v` flag to see includes directories  
- FINAL WORKING compilation:
	- had to keep tracing the `ld: missing symbols` and finding which library in /opt/home/includes had that symbol, then `-l` linking the library  
	- compile mathutils into .o file: `g++ -c -I./ mathutils/src/add.cpp -o add.o -v`
	- `g++ -I. demo/src/main.cpp add.o -lfolly --std=c++17 -v -lglog -lboost_context-mt -o main`  
	
