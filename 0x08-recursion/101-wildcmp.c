#include "main.h"
/**
 * wildcmp - compares two strings and return 1 or 0
 * @s1: string one
 * @s2: string two
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (*(s2 + 1) != '\0' && wildcmp(s1, s2 + 1))
			return (wildcmp(s1 + 1, s2));
	}

	return (0);
}
