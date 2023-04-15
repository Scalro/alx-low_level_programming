#include <stdio.h>
/**
 * main - prints args
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
