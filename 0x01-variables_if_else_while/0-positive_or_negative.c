#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int no;

	srand(time(0));
	no = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (no > 0)
		printf("%d is positive\n", no);
	else if (no < 0)
		printf("%d is negative\n", no);
	else
		printf("%d is zero\n", no);
	return (0);
}
