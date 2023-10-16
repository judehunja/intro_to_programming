#include <stdio.h>
/**
 * loop_through - loops through the array elements using a for loop
 * Return: 0
 */
int loop_through(void)
{
	int myNumbers[] = {25, 50, 75, 100};
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d\n", myNumbers[i]);
	}
	return (0);
}
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	loop_through();
	return (0);
}
