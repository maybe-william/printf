#include "print.h"
/**
  *
  *
  */
int s_format(char *format, char *s)
{
	char *temp;

	int i;

	temp = s;

	while (*temp)
	{
		write(1, temp, 1);
		temp++;
	}
	return (2);
}

int main(void)
{
	s_format("%s", "Hello, World");

	return (0);
}
