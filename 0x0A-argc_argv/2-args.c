#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
{
_putchar(argv[count]);
_putchar('\n');
}
return (0);
}
