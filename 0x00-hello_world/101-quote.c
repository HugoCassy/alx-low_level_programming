#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[66] = "and that piece of art is";
	char message_2[] = " useful\" - Dora Korpar, 2015-10-19\n";

	strcat(message, message_2);
	size_t length = strlen(message);

	write(2, message, length);
	return (1);
}
