#include <stdio.h>
/**
 * first_char - prints first character from user-inputted string
 * Return: 0
 */
int first_char(void)
{
	char string[100];

	printf("\nEnter a string: ");
	scanf("%s", string);
	printf("%c\n", string[0]);
	return (0);
}
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	first_char();
	return (0);
}
