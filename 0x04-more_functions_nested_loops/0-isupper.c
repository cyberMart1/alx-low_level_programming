#include <stdio.h>
/**
 * main - Check the code
 *
 * Return: Always 0.
*/

int main(void)
{
	char c;
	if(c = 'A')
	{
		printf("%c: %d\n", c, _isupper(c));
	}
	else if(c ='a')
	{
		printf("%c: %d\n", c, _isupper(c));
	}
	return (0);
}
