# ReadPE project

This project is small program to read a binary file and indentify if this is a PE (Portable Executable) binary.

For now, since Make compiling implementation is totally finished yet, you can MANUALLY compiling the code by take the following instructs.

**Note**: Theses Makefile were tested only in Windows and GNU/Linux (Debian Like) Operation Systems.


# How to use the software

After compile the software you get the CLI binary to run.

**Note**: I susgest you run this as Privilege ELevation (Admin for Windows)

## Files for test
  
  **Note 1**: There is a Putty.exe binary for test, as it is PE type.

  **Note 2**: There is also file.txt for test, as it is not PE type and have 32 bytes (the minimal size this sofware ask for).

## How to run the software

Just run the binary in CLI passing the file path to check.

For example, for verify if putty.exe is a PE file, type:

`./readpe putty.exe` 


# Compile/Install/Clear/Uninstall MANUALLY

In this section, we gonna consider Compile/Install/Clear/Uninstall procedures by use 'gcc' tools, however feel free to use your favorite IDE or other tools to achieve that.

**Prerequisites**: You need only 'gcc' tools installed in your build machine. If you use Windows OS, I suggest you achieve that by use [MinGw](https://pt.wikipedia.org/wiki/MinGW) framework; It also works if you have [Cygwin](https://pt.wikipedia.org/wiki/Cygwin) installed.

With prerequisites in place, you can Compile/Install/Clear/Uninstalls manually as following.

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


# Compile/Install/Clear/Uninstall AUTOMATICALLY

In this section, we gonna consider Compile/Install/Clear/Uninstall procedures by use 'make' and 'gcc' tools, however feel free to use your favorite IDE or other tools to achieve that.

**Prerequisites**: You need the 'make' and 'gcc' tools installed in your build machine. If you use Windows OS, I suggest you achieve that by use [MinGw](https://pt.wikipedia.org/wiki/MinGW) framework; It also works if you have [Cygwin](https://pt.wikipedia.org/wiki/Cygwin) installed.


**Note**: If you are using Windows OS as build machine, I suggest you rename the 'make' tools binary for call it 'make'. This avoid error, once Makefile commands use make tools by invock it by use 'make' word.

With prerequisites in place, you can Compile/Install/Clear/Uninstalls automatically by two ways: 1 - By use Makefile (like most projects) 2 - By use OneClickMake (Quick way).

## 1 - By use Makefile

### compilation

  To *compile* this software, just type:

    `make`

### install

  To *install* this software, just type:

    `make install`

### clear [TO DO]

  To *clear* this software, just type:

    `make clear`

### uninstall [TO DO]

  To *uninstall* this software, just type:

    `make uninstall`


## 2 - By use OneClickMake (Quick way)

### compilation/Install

This procedure is going to compile and Install software at same time.

**Note**: There is no *clear*, *uninstall* targets in this `OneClickMake` file yet.

To *compile* and *install* this software, just type:

  `make -f OneClickMake`


### clear/uninstall [TO DO]

To *clear* and *uninstall* this software, just type:

  `make uninstall`