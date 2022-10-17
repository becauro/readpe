OSFLAG :=
LIB_EXT :=
OS_LIB_LOCAL :=
Move_LB_To_OS_Folder :=

ifeq ($(OS),Windows_NT)
	OSFLAG = Windows
	LIB_EXT = .dll
	OS_LIB_LOCAL = C:/Windows/System32
	Move_LB_To_OS_Folder := copy libpetest.dll C:\Windows\System32

else
	OSFLAG = Linux
	LIB_EXT = .so
	OS_LIB_LOCAL = /usr/lib
	Move_LB_To_OS_Folder =  cp libpetest.so /usr/lib
endif

# Most time these targets are called by the other Makefile

all:
	gcc -shared -fPIC -o libpetest$(LIB_EXT)  petest.c
	@echo Library COMPILED successfully
	
install: 
	$(Move_LB_To_OS_Folder)
	@echo Library INSTALLED successfully

clear:
	[TO DO]
	@echo Library CLEAN successfully

uninstall:
	[TO DO]
	@echo Library UNINSTALLED successfully