#include <unistd.h>
/**
  * c_format - prints a character
  * @format: format specifier
  * @c: input character
  * Return: number of characters printed
  */
int c_format(char *format, char c)
{
	write(1, &c, 1);
	return (1);
}

int main (void)
{
	c_format("%c", 's');
	return (0);
}
