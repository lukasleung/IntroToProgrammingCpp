#!/bin/bash

# Get arguments
args=( "$@" )

# Print arguments
echo -e "Compiling and Running the following:"
for arg in "${args[@]}"; do
    echo $arg
done

# Compiling programs into 'runme'
g++ -o runme $@

# Run the programs
echo -e "Finished compiling, now running\n"
./runme

# Cleaning up
rm runme
