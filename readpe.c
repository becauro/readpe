#include <stdio.h>
#include <stdlib.h>

void error_func(char *msg) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(1);
}

void usage_func(char *file_name) {

  printf("Usage: \n\t readpe <%s>\n", file_name);
  exit(1);
}

int main(int argc, char *argv[]) {

  FILE *fh;
  if (argc != 2) {
    error_func("Something get wrong");
  }

  usage_func(argv[1]);
  return 0;

}