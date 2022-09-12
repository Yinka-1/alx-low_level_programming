#include <stdio.h>
#include <unistd.h>

/**
 * main - Printing the alphabets
 *
 * Description: prints the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
