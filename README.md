asm-arm
=======

Working with assembler ARM

Build:<br>
CFLAGS="-ggdb -Wall" cmake -DCMAKE_TOOLCHAIN_FILE=Toolchain-RaspberryPi.cmake .<br>
make

command for assembler listing: `arm-linux-gnueabihf-gcc -Wa,-adhln -g argv.c > argv-arm.s`