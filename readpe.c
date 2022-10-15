#include <stdio.h>
#include <stdlib.h>

void error_func(char *msg) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(1);
}


void read_file(FILE *file_stream){
  unsigned char buffer[32];

  int reading_result = fread(buffer, 32, 1, file_stream);

  if (reading_result != 1) {
    printf("The file content 32 bytes cannot be read");
    exit(1);
  }

  printf("Successful file read");
}

void open_file(char *file_name){

  FILE *fh;

  fh = fopen(file_name, "rb");

  if(fh == NULL)
    error_func("Ops! It seems the file cannot be read!");
  
  printf("Usage: \n\t File: <%s>\n", file_name);

  read_file(fh);
}



void usage_func(char *file_name) {

  open_file(file_name); // This func also calls read_file() func
}

int main(int argc, char *argv[]) {

  if (argc != 2) {
    error_func("Missing file name!");
  }

  usage_func(argv[1]);
  return 0;

}