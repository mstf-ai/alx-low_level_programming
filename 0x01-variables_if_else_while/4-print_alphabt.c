#include<stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line,
 * except for the letters q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
if (c != 'q' && c != 'e')
putchar(c);
putchar('\n');
return (0);
}

