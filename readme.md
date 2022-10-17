# ReadPE project

This project is small program to read a binary file and indentify if this is a PE (Portable Executable) binary.

For now, since Make compiling implementation is totally finished yet, you can MANUALLY compiling the code by take the following instructs.

**Note**: Theses Makefile were tested only in Windows and GNU/Linux (Debian Like) Operation Systems.


# How to use the software

After compile the software you get the CLI binary to run.

**Note**: I susgest you run this as Privilege ELevation (Admin for Windows)

## Files for test
  
  **Note 1**: There is a Putty.exe binary for test, as it is PE type.
  **Note 2**: There is also file.txt for test, as it is not PE type but is 32 bytes.

## How to run the software

Just run the binary in CLI passing the file path to check.


# Compilation/install manually

## Libraries Compilation

If you use GCC compiler, the following CLI commands are proper to compile the *'petest'* library:

### for Windows


  `gcc -shared -fPIC -o libpetest.dll  petest.c`

### for GNU/Linux


  `gcc -shared -fPIC -o libpetest.so  petest.c` 


## Libraries install

Once one library is compiled, the place to move libraries depends on Operation System used to compiling.


### for Windows

I move the **.dll* library to `C:\Windows\System32` path.


### for GNU/Linux

I move the a **.so* library to `/usr/lib` path.

## Binary compilation

If you use GCC compiler, the following CLI commands are proper to compile the *'readpe'* source code. 
However, make sure that you already compiled the petest library and put it inside the 'lib' folder.

### for Windows

  `gcc -o readpe.exe readpe.c -L.\lib -lpetest`

### for GNU/Linux

  `gcc -o readpe readpe.c -L.\lib -lpetest`

## Binary install

This install happen automatically when the library is installed


# Compilation/install automatically


Considering 'make' tool is present in your build machine, this can done by two ways: 1 - By use Makefile (like most projects) 2 - By use OneClickMake (Quick way).

**Prerequisites**: You need the 'make' tool installed in your build machine. If you use Windows OS, I suggest you achieve that by use minGW framework; It also works if you have cygwin as well.
## 1 - By use Makefile

**TO DO**


## 2 - By use OneClickMake (Quick way)

### compilation/Install

This procedure is going to compile and Install it at same time.

**Note**: There is no *clear*, *uninstall* targets in this `OneClickMake` file yet.

**Note 2**: If you are using Windows OS as build machine, I suggest you rename the 'make' tools binary for call it 'make'. This avoid error, once Makefile commands use make tools by invock it by 'make' word.

**Note 3**: Theses Makefiles were tested only in Windows and GNU/Linux (Debian Like) Operation Systems.


### cleaning/uninstall

**TO DO**