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

# TARGE 'all' Wrong MODE

all: lib/libpetest$(LIB_EXT)
	gcc -o readpe$(BIN_EXT) readpe.c -L lib -lpetest
	@echo Software COMPILED successfully

lib/libpetest$(LIB_EXT):
	make -C lib

install:
	make install -C lib
	@echo Software INSTALLED successfully

clear:
	[TO DO]
	@echo Software CLEAN successfully

uninstall:
	[TO DO]
	@echo Software UNINSTALLED successfully


