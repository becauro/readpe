

OSFLAG :=
BIN_EXT :=
LIB_EXT :=

ifeq ($(OS),Windows_NT)
	OSFLAG = Windows
	BIN_EXT = .exe
	LIB_EXT = .dll
else
	OSFLAG = Linux
	LIB_EXT = .so
endif


all: lib/libpetest$(LIB_EXT)
	
	gcc -o readpe$(BIN_EXT)  readpe_libless.c
	
lib/libpetest$(LIB_EXT):

	make -C lib