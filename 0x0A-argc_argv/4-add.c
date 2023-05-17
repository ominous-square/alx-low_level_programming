#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int i, j, sum;

    if (argc = 1)
    {
        printf("0\n");
    }
    else
    {
        for (i = 0; i < argc; i++)
        {
            for (j = 0; j < argc; j++)
            {
                if (argv[j] > '9')
                {
                    printf("Error\n");
                    return (1);
                }
            }
            
            if (argv[i] > '9')
                {
                    printf("Error\n");
                    return (1);
                }
        } 

        printf("%d\n", atoi(argv[i]) + atoi(argv[j]));
    }
}