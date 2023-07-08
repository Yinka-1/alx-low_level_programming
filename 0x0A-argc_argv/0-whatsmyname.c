#include <stdio.h>
#include "header.h"

/**
* main - Entry point
*
* Description: Using argc and argv to print the file name
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
if (argc == 1)
{
	printf("%s\n", argv[0]);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);

}
