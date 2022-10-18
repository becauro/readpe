OSFLAG :=
BIN_EXT :=
Clean_Binary :=

ifeq ($(OS),Windows_NT)
	OSFLAG = Windows
	BIN_EXT = .exe
	Clean_Binary = del readpe.exe
else
	OSFLAG = Linux
	Clean_Binary = rm readpe
endif

# all
all: install # Uncomment it and comment the above line if you want to BUILD libraries as well
	gcc -o readpe$(BIN_EXT) readpe.c -L lib -lpetest
	@echo Software BUILDED successfully

install: # This target BUILD (compile and Install) libraries
	make -C lib 
	make install -C lib

# clean:
clean: clean_lib # Uncomment it and commnet the above line if you want to clean libraries as well 
	$(Clean_Binary)
	@echo Software CLEAN successfully

clean_lib: # This target clean libraries
	make clean -C lib

uninstall: # This just uninstall libraries for now
	make uninstall -C lib
	@echo Software UNINSTALLED successfully