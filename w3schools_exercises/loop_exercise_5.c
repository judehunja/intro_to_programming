#include <stdio.h>
/**
 * jump_4 - when the value is 4, it jumps to the next value
 * Return: always 0(success)
 */
int jump_4(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			continue;
		}
		printf("%d\n", i);
	}
}
/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	jump_4();
	return (0);
}
