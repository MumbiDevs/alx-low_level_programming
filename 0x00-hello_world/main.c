#!/bin/bash

# Script: compile_without_linking.sh
#
# Description: This script compiles a C file without linking.
#
# Usage: ./compile_without_linking.sh
#
# Requirements: The C file name should be set in the $CFILE environment variable before running the script.
#               The C file should be located in the same directory as the script.
#
# Output: The compiled output file is saved with the same name as the C file, but with the extension .o
#         The output file is saved in the same directory as the script.
#
# Note: The script assumes that the C file is valid and can be successfully compiled without linking.
#       You may need to modify the script to suit your specific use case or add error handling as needed.
#

# Get the C file name from the environment variable $CFILE
cfile="$CFILE"

# Check if the C file exists
if [ ! -f "$cfile" ]; then
    echo "Error: $cfile does not exist."
    exit 1
fi

# Extract the base name of the C file without the extension
base_name="${cfile%.c}"

# Compile the C file without linking and save the output file with the same base name but with .o extension
gcc -c "$cfile" -o "$base_name.o"

# Check if the compilation was successful
if [ $? -ne 0 ]; then
    echo "Error: Failed to compile the C file without linking."
    exit 1
fi

echo "Compiled output saved to $base_name.o."
