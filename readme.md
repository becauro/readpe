# ReadPE project

This project is small program to read a binary file and indentify if this is a PE (Portable Executable) binary.

For now, since Make compiling implementation is not get done yet, most thing need to be done MANUALLY, from compiling to moved libraries to proper Operation System folder, whether it is GNU/Linux or not.

Actually the Make implementation is a work in progress, because I want it works cross-platform.

# Libraries


## Libraries Compiling

If you use GCC compiler, the following CLI commands are proper to compile the *'petest'* library:

### for Windows


  `gcc -shared -fPIC -o libpetest.dll  petest.c`

### for GNU/Linux


  `gcc -shared -fPIC -o libpetest.so  petest.c` 


## Library Local

Once one library is compiled, the place to move libraries depends on Operation System used to compiling.


### for Windows

I move the a **.dll* library to `C:\Windows\System32 path`.


### for GNU/Linux

I move the a **.so* library to `/usr/lib path`



# Binary compiling

If you use GCC compiler, the following CLI commands are proper to compile the *'readpe'* source code. 
However, make sure that you already compiled the petest library and put it inside the 'lib' folder.

### for Windows

  `gcc -o readpe.exe readpe.c -L.\lib -lpetest`

### for GNU/Linux

  `gcc -o readpe readpe.c -L.\lib -lpetest`
