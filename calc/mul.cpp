#include "mul.h"
#include "add.h"

int mul(int a, int b)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < b; i++)
	{
		sum = add(a, sum);
	}
	return sum;
}