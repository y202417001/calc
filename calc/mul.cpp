#include "mul.h"
#include "add.h"

int mul(int a, int b)
{
	int k = 0;
	int sum = 0;

	for (k = 0; k < b; k++)
	{
		sum = add(a, sum);
	}
	return sum;
}