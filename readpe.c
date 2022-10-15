#include <stdio.h>
#include <stdlib.h>

void error_func(char *msg) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(1);
}

void usage_func(char *file_name) {

  FILE *fh;

  fh = fopen(file_name, "rb");

  if(fh == NULL)
    error_func("Ops! It seems the file cannot be read!");
  
  printf("Usage: \n\t readpe <%s>\n", file_name);
  // exit(1);
}

int main(int argc, char *argv[]) {

  if (argc != 2) {
    error_func("Missing file name!");
  }

  usage_func(argv[1]);
  return 0;

}