# ReadPE project

This project is small program to read a binary file and indentify if this is a PE binary.

For now the, since I am not using a build / compiler software like CMake, most thing need to be done MANUALLY since compiling to moved libraries to proper folder in the Operation System, whether it is GNU/Linux or not.


# Libraries


## Libraries Compiling

If you use GCC compiler, the following CLI commands are proper to compile the *'petest'* library:

### for Windows


  `gcc -shared -fPIC -o libpetest.dll  petest.c`

### for GNU/Linux


  `gcc -shared -fPIC -o libpetest.so  petest.c` 


## Library Local

Once one library is compiled, the Operation System local where must to be moved this library for depends on Operation System used to compiling.


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
