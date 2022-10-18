OSFLAG :=
LIB_EXT :=
Move_LB_To_OS_Folder :=
Clean_Library :=
ReMove_LB_From_OS_Folder :=

ifeq ($(OS),Windows_NT)
	OSFLAG = Windows
	LIB_EXT = .dll
	Move_LB_To_OS_Folder = copy libpetest.dll C:\Windows\System32
	Clean_Library = del libpetest.dll
	ReMove_LB_From_OS_Folder = del C:\Windows\System32\libpetest.dll
else
	OSFLAG = Linux
	LIB_EXT = .so
	Move_LB_To_OS_Folder =  cp libpetest.so /usr/lib
	Clean_Library = rm libpetest.so
	ReMove_LB_From_OS_Folder = rm /usr/lib/libpetest.so
endif

# Most time these targets are called by the other Makefile

all:
	gcc -shared -fPIC -o libpetest$(LIB_EXT)  petest.c
	@echo Library COMPILED successfully

install: 
	$(Move_LB_To_OS_Folder)
	@echo Library INSTALLED successfully

clean:
	$(Clean_Library)
	@echo Library CLEAN successfully

uninstall:
	$(ReMove_LB_From_OS_Folder)
	@echo Library UNINSTALLED successfully