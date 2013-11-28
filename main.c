#include <stdio.h>
#include "wrapper.h"
int caml_startup(char *argv[]);

int main(int argc, char *argv[]){
   printf("Hello World, C\n");
   caml_startup(argv);
   function_in_wrapper();
   return 0;
}

