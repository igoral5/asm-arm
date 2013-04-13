/*
 * argv.c
 *
 *  Created on: 12.04.2013
 *      Author: igor
 */
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    if (argc > 1)
    {
        int a = 1;
        double y = 0.5L;
        double x = 0.7L;
        double z = 1.2L;
        printf("%f\n", x+y+z);
        puts(argv[1]);
    }
    return EXIT_SUCCESS;
}

