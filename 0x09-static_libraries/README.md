# 0x09. C - Static libraries

# create_static_lib.sh

This script creates a static library called liball.a from all the .c files that are in the current directory. It uses the ar command to create the library, and the -rcs flags to add the .o files to the library.

To use this script, navigate to the directory containing your .c files and run ./create_static_lib.sh. The script will create a liball.a file containing all the .o files from the .c files in the directory. You can then link against this library using the -L flag during compilation.

