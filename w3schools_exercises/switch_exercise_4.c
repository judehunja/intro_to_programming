#include <stdio.h>
/**
 * day_1_or_2 - switches statements based in user input
 * Return: always 0 (success)
 */
int day_1_or_2(void)
{
	int day = 0;

	scanf("%d", &day);

	switch (day)
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Sunday\n");
		break;
	default:
		printf("Enter either 1 or 2\n");
	}
	return (0);
}

int main(void)
{
	day_1_or_2();
	return (0);
}
