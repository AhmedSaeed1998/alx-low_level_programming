#include "main.h"
#include <stdio.h>

/**
 * main - print file name and nooneed to re-compile
 * @argc: argument count
 * @argv: Argument vector
 * Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
