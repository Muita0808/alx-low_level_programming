#include <stdio.h>

/*
 * main - prints out the number of arguments passeed to it
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return always 0 on success.
 */

int main(int argc, char **argv)
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
