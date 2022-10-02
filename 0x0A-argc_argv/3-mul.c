#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies the integers passed to it
  * @argc: argument count
  * @argv: argument vector
  * Return: Always (0)
  */

int main(int argc, char *argv[])
{
	int i;

	i = (atoi(argv[1])) * (atoi(argv[2]));


	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	else
	{
		printf("%d\n", i);
	}
	return (0);
}
