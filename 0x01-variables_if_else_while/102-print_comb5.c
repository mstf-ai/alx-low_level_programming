#include<stdio.h>

/**
 * main - a function named main
 *
 * Return: Always returns 0
 */
int main(void)
{
int i, j;

for (i = 0; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');

if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}

