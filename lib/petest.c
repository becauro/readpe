// #include <stdio.h>
// #include <stdlib.h>
#include "petest.h" // This import already brings the above libraries includes
void isPE(const unsigned char *buffer) {

  if(buffer[0] != 'M' || buffer[1] != 'Z'){
    printf("This file is NOT a PE\n");
    exit(1);
  }

  printf("This is a PE file\n");
  
}