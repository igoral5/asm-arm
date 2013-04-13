/*
 * main.c
 *
 *  Created on: 07.03.2013
 *      Author: igor
 */

#include <stdio.h>
#include <stdlib.h>

int
add_two(int a, int b)
{
    return a+ b;
}

int
add_three(int a, int b, int c)
{
    int tmp = add_two(a, b);
    return add_two(tmp, c);
}

int
main(int argc, char *argv[])
{
    printf("Number %d\n", add_three(7, 6, 5));
	return EXIT_SUCCESS;
}
