#include <unistd.h>
/**
 * main - The main function
 * Return: it is a return 1
 */

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, message, 59);
    return (1);
}
