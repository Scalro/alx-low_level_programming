#include <stdio.h>
/**
 * main - program
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argc--; /*added to pass checks*/
	printf("%s\n", argv[0]);
	return (0);
}
