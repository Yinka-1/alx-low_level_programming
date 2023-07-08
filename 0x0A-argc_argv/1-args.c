#include <stdio.h>
#include "main.h"

/**
* main - A program that prints the number of arguments
*
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (Success)
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
if (argc >= 1)
{
	printf("%d\n", argc-1);
}
return (0);

}
