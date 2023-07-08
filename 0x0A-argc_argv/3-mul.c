#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - Prints the multiplication of two interger arguments
*
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{

if (argc != 3)
{
	printf("Error\n");
	return (1);
}
else
{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);

}
