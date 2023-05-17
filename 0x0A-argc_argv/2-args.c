#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int c, i;

    for (c= 0; c < argc; c++)
    {
        printf("%s\n", argv[c]);
    }
    return (0);
}
