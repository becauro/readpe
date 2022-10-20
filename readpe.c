#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h" // That is compiled even it is not back slash (\)


void usage_func(char *file_name) {

PEFILE pe;

pe.filepath = file_name;

  init(&pe);
  deinit(&pe);
}

int main(int argc, char *argv[]) {

  if (argc != 2) {
    msg("Missing file name!");
  }

  usage_func(argv[1]);
  return 0;


}



