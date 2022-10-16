

OSFLAG :=
LIB_EXT :=


ifeq ($(OS),Windows_NT)
	OSFLAG = Windows
	LIB_EXT = .dll
else
	OSFLAG = Linux
	LIB_EXT = .so
endif


all:
		gcc -shared -fPIC -o libpetest$(LIB_EXT)  petest.c
		