#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * no argument
 * Return: 0
 */
int main(void)
{
	long fir = 1, sec = 2, sum;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = fri + sec;
		printf(", %lu", sum);
		fri = sec;
		sec = sum;
	}
	printf("\n");
	return (0);
}
