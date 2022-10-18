# ReadPE project

This project is small program to read a binary file and indentify if this is a PE (Portable Executable) binary.

For now, since Make compiling implementation is totally finished yet, you can MANUALLY compiling the code by take the following instructs.

**Note**: Theses project was tested only in Windows and GNU/Linux (Debian 'like') Operation Systems. But I think is not so hard to build under/for other Unix 'like' Operation Systems, like MacOS for example.


# How to use the software

After compile the software you get the CLI binary to run.

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


**Note**: I suggest you run these procedures as Elevated Privileges (by use 'sudo', root, Admin (for Windows) or whatever...)

With that in place, you can Compile/Install/Clear/Uninstalls manually as following.

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


**Note 1**: If you are using Windows OS as build machine, I suggest you rename the 'make' tools binary for call it 'make'. This avoid error, once Makefile commands use make tools by invock it by use 'make' word.

**Note 2**: I suggest you run these procedures as Elevated Privileges (by use 'sudo', root, Admin (for Windows) or whatever...)

With that in place, you can Compile/Install/Clear/Uninstalls automatically by two ways: 1 - By use Makefile (like most projects) 2 - By use OneClickMake (Quick way).

## 1 - By use Makefile

This procedures is going to compilation, Install, clear and uninstall software in a way it is in most project out there.
That means to follow the build process in known separate steps.

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

This procedures is going to compilation/Install or clear/uninstall software at same time.
This a way I made to save time.

### compilation/Install


To *compile* and *install* this software, just type:

  `make -f OneClickMake`


### clear/uninstall [TO DO]

To *clear* and *uninstall* this software, just type:

  `make uninstall`


# Other informations

The readpe_libless folder means has this same project except it is without library.
For now that is here but I intend move it to a separate repositoty soon. Ignore it please.

-------

Feel free to contribute with this project. 

Thank you :-)