#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: pointer to the memory of a string
 *
 * Return: c
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
