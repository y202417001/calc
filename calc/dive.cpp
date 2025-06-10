#include "dive.h"
#include "sub.h"

int dive(int x, int y)
{
	if (y == 0) return 0;
	int count = 0;
	int temp = x;
	while (temp >= y) {
		temp = sub(temp, b);
		count++;
	}
	return count;
}