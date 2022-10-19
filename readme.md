# ReadPE project

This project is small program to read a binary file and indentify if this is a PE (Portable Executable) binary.

**Note**: Theses project was tested only in Windows and GNU/Linux (Debian 'like') Operation Systems. But I think is not so hard to build under/for other Unix 'like' Operation Systems too, like MacOS.


# How to use the software

After compile the software you get the CLI binary to run.

## Files for test
  
  **Note 1**: There is a Putty.exe binary for test, as it is PE type.

  **Note 2**: There is also file.txt for test, as it is not PE type and have 32 bytes (the minimal size this sofware ask for).

## How to run the software

Just run the binary in CLI passing the file path to check.

For example, for verify if putty.exe is a PE file, type:

`./readpe putty.exe` 


# Compile/Install/Clean/Uninstall MANUALLY

In this section, we gonna consider Compile/Install/Clean/Uninstall procedures by use 'gcc' tools, however feel free to use your favorite IDE or other tools to achieve that.

**Prerequisites**: You need only 'gcc' tools installed in your build machine. If you use Windows OS, I suggest you achieve that by use [MinGw](https://pt.wikipedia.org/wiki/MinGW) framework; It also works if you have [Cygwin](https://pt.wikipedia.org/wiki/Cygwin) installed.


**Note**: I suggest you run these procedures as Elevated Privileges (by use 'sudo', root, Admin (for Windows) or whatever...)

With that in place, you can Compile/Install/Clean/Uninstalls manually as following.

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


# Compile/Install/Clean/Uninstall AUTOMATICALLY

In this section, we gonna consider Compile/Install/Clean/Uninstall procedures by use 'make' and 'gcc' tools, however feel free to use your favorite IDE or other tools to achieve that.

**Prerequisites**: You need the 'make' and 'gcc' tools installed in your build machine. If you use Windows OS, I suggest you achieve that by use [MinGw](https://pt.wikipedia.org/wiki/MinGW) framework; It also works if you have [Cygwin](https://pt.wikipedia.org/wiki/Cygwin) installed.


**Note 1**: If you are using Windows OS as build machine, I suggest you rename the 'make' tools binary for call it 'make'. This avoid error, once Makefile commands use make tools by invock it by use 'make' word.

**Note 2**: I suggest you run these procedures as Elevated Privileges (by use 'sudo', root, Admin (for Windows) or whatever...)

With that in place, you can Compile/Install/Clean/Uninstalls automatically by two ways: 1 - By use Makefile (like most projects) 2 - By use Makefile modified (Quick way); it's **default way** in this project.

## 1 - By use Makefile

This procedures is going to compilation, Install, clean and uninstall software.
The same apply to any library when it has a Makefile file as well.

### compilation

  To *compile* this software, just type:

    `make`

### install

  To *install* this software, just type:

    `make install`

### clean

  To *clean* this software, just type:

    `make clean`

### uninstall

  To *uninstall* this software, just type:

    `make uninstall`


## 2 - By use Makefile modified (Quick way)

This procedures consist to compilation/Install and clean/uninstall software by *including the libraries* in this process.
This is a way I made to save time and that is the default way enabled in Makefile.
You can read the Makefile comments, they are marked every point about this mode. 

### compilation/Install


To *compile* and to *install* this software, including to *compile* and to *install* the libraries, just keep `all: install` target uncommented in Makefile, then type the following command:

  `make`


### clean

To *clean* this software,  including to *clean* the libraries, just keep `clean: clean_lib` target uncommented in Makefile, then type the following command:

  `make clean`


### uninstall

To *uninstall* this software,  we just have to *uninstall* the libraries, that means this `uninstall` target actually run the library Makefile `uninstall` target, then type the following command:

  `make uninstall`



# Other informations

The readpe_libless folder has this same project, except it is implemented without libraries.
For now that folder is here, but I intend move it to a separate repositoty sooner. So ignore it please.

# References

[Programação Moderna em C](https://github.com/mentebinaria/prog_moderna_c).

-------

Feel free to contribute with this project. 

Thank you :-)