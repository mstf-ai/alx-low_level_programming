#include "main.h"

/**
 * *_strcat - the name of this function
 *
 * @*dest: the first argument
 * @*src: the second argument
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i;

    /* Find the length of the dest string */
    while (dest[dest_len] != '\0')
        dest_len++;

    /* Append the src string to the dest string */
    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    /* Add the terminating null byte */
    dest[dest_len + i] = '\0';

    return dest;
}

