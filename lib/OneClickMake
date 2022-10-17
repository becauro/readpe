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

all: $(OS_LIB_LOCAL)/libpetest$(LIB_EXT)
	@echo Library Compiling successful

$(OS_LIB_LOCAL)/libpetest$(LIB_EXT): libpetest$(LIB_EXT)

	$(Move_LB_To_OS_Folder)
	

libpetest$(LIB_EXT):
		gcc -shared -fPIC -o libpetest$(LIB_EXT)  petest.c
		