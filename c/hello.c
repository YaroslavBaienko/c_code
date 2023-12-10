#include <stdio.h>

int main()
{
	long long int i, sum = 0;
	for (i = 0; i < 1000000000; i++)
	{
		sum += i;
	}
	printf("Сумма: %lld\n", sum);
	return 0;
}
