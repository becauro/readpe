OSFLAG :=
BIN_EXT :=
LIB_EXT :=

OS_LIB_LOCAL :=

ifeq ($(OS),Windows_NT)
	OSFLAG = Windows
	BIN_EXT = .exe
	LIB_EXT = .dll
	OS_LIB_LOCAL = C:/Windows/System32
else
	OSFLAG = Linux
	LIB_EXT = .so
	OS_LIB_LOCAL = /usr/lib
endif


all: $(OS_LIB_LOCAL)/libpetest$(LIB_EXT)

	@echo Software Compiling successful

$(OS_LIB_LOCAL)/libpetest$(LIB_EXT): lib/libpetest$(LIB_EXT)
	
	gcc -o readpe$(BIN_EXT) readpe.c -L lib -lpetest
	
lib/libpetest$(LIB_EXT):

	make -C lib