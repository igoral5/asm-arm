project(asm-arm C)
cmake_minimum_required(VERSION 2.8)

add_executable( argv
	argv.c 
)

add_executable( no-argv
	no-argv.c 
)

add_executable( asm-arm
	main.c 
)
