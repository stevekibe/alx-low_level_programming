#include "main.h"
#include <stdio.h>
#define word(x) (void)(x)
/**
 * main - print main of the program
 * @argc: count arguments
 * @argv: Arguments
 * Return: always 0
*/
int main(int argc, char *argv[])
{
    word(argc);
    print("%s\n", argv[0]);
    return (0);
}