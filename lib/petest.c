#include "petest.h" // This import already brings the above libraries includes
#include <stdbool.h>


void msg(char *msg) {

  printf("%s\n", msg);
}

void isPE(PEFILE *pe) {

  if(pe->hdr_dos->e_magic != 0x5A4D){
    msg("This file is NOT a PE");
    exit(1);
  }

  msg("This is a PE file");
  
}


bool read_file(PEFILE *pe, FILE *file_stream){
  pe->hdr_dos = malloc(sizeof(IMAGE_DOS_HEADER));

  int reading_result = fread(pe->hdr_dos, 32, 1, file_stream);

  if (reading_result != 1) {
    msg("The file content cannot be read");
    exit(1);
  }


  msg("\nFile read successful\n");

  return true;
}


 void init(PEFILE *pe){

  FILE *fh;

  fh = fopen(pe->filepath, "rb");


  if(fh == NULL)
    msg("\nOps! It seems the file cannot be read!\n");
  
  printf("\nUsage: \n\t File: <%s>\n", pe->filepath);

  bool result = read_file(pe, fh);

  if(result){

    isPE(pe);

  };  


  fclose(fh);
}


void deinit(PEFILE *pe){
  if(pe->hdr_dos)
    free(pe->hdr_dos);

}
