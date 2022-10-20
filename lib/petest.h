#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

#pragma pack(push, 1)

typedef struct {
  uint16_t e_magic;
  uint16_t e_cblp;
  uint16_t e_cp;
  uint16_t e_crlc;
  uint16_t e_cparhdr;
  uint16_t e_minalloc;
  uint16_t e_maxalloc;
  uint16_t e_ss;
  uint16_t e_sp;
  uint16_t e_csum;
  uint16_t e_ip;
  uint16_t e_cs;
  uint16_t e_lfarlc;
  uint16_t e_ovno;
  uint16_t e_res[4];
  uint16_t e_oemid;
  uint16_t e_oeminfo;
  uint16_t e_res2[10];
  uint32_t e_lfanew; // sizeof(IMAGE_DOS_HEADER) + size of MS-DOS stub
} IMAGE_DOS_HEADER;

#pragma pack(pop)

typedef struct {

  char *filepath;
  IMAGE_DOS_HEADER *hdr_dos;
} PEFILE;


void isPE(PEFILE *pe);
bool read_file(PEFILE *pe, FILE *file_stream);
void init(PEFILE *pe);
void deinit(PEFILE *pe);
void msg(char *msg);
