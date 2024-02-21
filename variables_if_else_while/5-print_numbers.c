#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char lowercase;

        for (lowercase = '0'; lowercase <= '9'; lowercase++)
        {
                putchar(lowercase);
        }
        putchar('\n');
        return (0);
}
