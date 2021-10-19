//
// Created by wbai on 10/19/2021.
//

#include <stdio.h>
#include <stdlib.h>

char *say_hello() {return "Hello, CMake world!";}

int main()
{
    printf("%s\n", say_hello());
    return EXIT_SUCCESS;
}