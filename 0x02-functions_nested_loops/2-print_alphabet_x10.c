#include "main.h"
/**
 * main - Prints the result
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
int print_alphabet_x10()
{
	int a;

	int i = 0;

	while (i <= 10)
	{
		for (a = 'a'; a < 'z'; a++)
		{
			 _putchar(a);
		}
		 _putchar('\n');
		i++;
	}
	return (0);
}
