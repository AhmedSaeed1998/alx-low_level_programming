#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argumnet count
 * @argv: argument vector
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
