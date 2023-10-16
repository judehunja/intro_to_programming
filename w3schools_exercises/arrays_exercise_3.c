#include <stdio.h>
/**
 * change_array - changes the value of the first element of array
 * Return: 0
 */
int change_array(void)
{
	int num;
	int i;
	int myNumbers[] = {25, 50, 75, 100};

	printf("Current array: \n");

	printf("{ ");
	for (i = 0; i < 4; i++)
		printf("%d ", myNumbers[i]);
	printf("}\n");
	printf("Enter value for the first element of the array: \n");
	scanf("%d", &num);

	myNumbers[0] = num;

	printf("Changed array: \n");

	printf("{ ");
	for (i = 0; i < 4; i++)
		printf("%d ", myNumbers[i]);
	printf("}\n");
	return (0);
}
/**
 * main - entry_point
 * Return: always 0
 */
int main(void)
{
	change_array();
	return (0);
}
