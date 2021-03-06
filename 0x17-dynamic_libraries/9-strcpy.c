#include "holberton.h"
/**
 * *_strcpy - copies the string pointed to by src including the null byte to
 * the buffer pointed to by dest
 * @dest: pointer to char buffer
 * @src: pointer to char string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
