#include <stdio.h>
#include "main.h"

/**
* main - Prints all the arguments passed to it in a new line
*
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
{
	printf("%s\n", argv[count]);

}
return (0);

}
