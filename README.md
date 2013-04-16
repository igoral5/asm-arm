asm-arm
=======

Working with assembler ARM

Build:
CFLAGS="-ggdb -Wall" cmake -DCMAKE_TOOLCHAIN_FILE=/home/igor/Dropbox/Toolchain-RaspberryPi.cmake .<br>
make

command for assembler listing: `arm-linux-gnueabihf-gcc -Wa,-adhln -g argv.c > argv-arm.s`