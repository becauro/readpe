# ReadPE project

This project is small program to read a binary file and indentify if this is a PE (Portable Executable) binary.

For now, since Make compiling implementation is totally finished yet, you can MANUALLY compiling the code by take the following instructs.

*Note*: Theses Makefile were tested only in Windows and GNU/Linux (Debian Like) Operation Systems.

# Libraries


## Libraries Compiling

If you use GCC compiler, the following CLI commands are proper to compile the *'petest'* library:

### for Windows


  `gcc -shared -fPIC -o libpetest.dll  petest.c`

### for GNU/Linux


  `gcc -shared -fPIC -o libpetest.so  petest.c` 


## Libraries Local

Once one library is compiled, the place to move libraries depends on Operation System used to compiling.


### for Windows

I move the **.dll* library to `C:\Windows\System32` path.


### for GNU/Linux

I move the a **.so* library to `/usr/lib` path.



# Binary compiling

If you use GCC compiler, the following CLI commands are proper to compile the *'readpe'* source code. 
However, make sure that you already compiled the petest library and put it inside the 'lib' folder.

### for Windows

  `gcc -o readpe.exe readpe.c -L.\lib -lpetest`

### for GNU/Linux

  `gcc -o readpe readpe.c -L.\lib -lpetest`



# Binary use

After compile the software you get the CLI binary to run.

*Note*: I susgest you run this as Privilege ELevation (Admin for Windows)

## Files for test
  
  *Note 1*: There is a Putty.exe binary for test, as it is PE type.
  *Note 2*: There is also file.txt for test, as it is not PE type but is 32 bytes.

## How to use it

Just run the binary in CLI passing the file path to check.



# Auto build with 'make' tools


If you want build it quickly, you can use make tools, if you have it installed in your machine.

Despite the make implementation is not finished at all, you can build the source just by use make tools.

*Note*: For now, the make compile libraries / binary as well as move the libraries to proper OS Local; there is not Clear and uninstall target in MakeFiles yet.

*Note 2*: If use Windows OS to build the code by use make tools, I suggest you rename the make tools binary for call it just 'make'. This avid error. The Makefile command use make tools by calling it just by 'make'.


*Note 3*: Theses Makefile were tested only in Windows and GNU/Linux (Debian Like) Operation Systems.




