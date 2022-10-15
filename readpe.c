#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h" // That is compiled even it is not back slash (\)

void error_func(char *msg) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(1);
}

// void isPE(const unsigned char *buffer) {

//   if(buffer[0] != 'M' || buffer[1] != 'Z'){
//     printf("This file is NOT a PE\n");
//     exit(1);
//   }

//   printf("This is a PE file\n");
  
// }

void read_file(FILE *file_stream){
  unsigned char buffer[32];

  int reading_result = fread(buffer, 32, 1, file_stream);

  if (reading_result != 1) {
    printf("The file 32 bytes content cannot be read");
    exit(1);
  }

  printf("\nFile read successful\n");
  isPE(buffer);
}

void open_file(char *file_name){

  FILE *fh;

  fh = fopen(file_name, "rb");

  if(fh == NULL)
    error_func("\nOps! It seems the file cannot be read!\n");
  
  printf("\nUsage: \n\t File: <%s>\n", file_name);

  read_file(fh);  // This func also calls isPE()

  fclose(fh);
}



void usage_func(char *file_name) {

  open_file(file_name); // This func also calls read_file()
}

int main(int argc, char *argv[]) {

  if (argc != 2) {
    error_func("Missing file name!");
  }

  usage_func(argv[1]);
  return 0;

}