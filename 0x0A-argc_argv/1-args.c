#include <stdio.h>

/**
  * main - prints the number of arguments passed to it
  *
  * @argv: argument vector
  * @argc: argument count
  *
  * Return: Always (0)
  */

int main(int argc, char *argv[])
{
	argv[8] = "9";

	if (argc > 8)
	{
		printf("%s\n", argv[8]);
	}
	else
	{
		printf("%d\n", argc);
	}
	return (0);
}
