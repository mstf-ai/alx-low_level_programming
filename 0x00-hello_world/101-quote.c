#include<unistd.h>
/**
 * main - this is a function to print text in new line
 *
 * Return: this to retorn 1 always
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

