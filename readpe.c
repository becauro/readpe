#include <stdio.h>
#include <stdlib.h>

void error_func(char *msg) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(1);
}

int main(int argc, char *argv[]) {

  FILE *fh;
  if (argc != 2) {
    error_func("Something get wrong");
  }

  printf("That worked. The file name is: %s\n", argv[1]);
  return 0;

}