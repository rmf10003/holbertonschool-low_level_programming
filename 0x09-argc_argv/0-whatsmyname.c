#include <stdio.h>
#include "holberton.h"
/**
 * main - prints its own name followed by new line
 * @argc: int
 * @argv: pointer to array of strings
 *
 * Return: zero if success
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
