#include "mod.h"
#include "sub.h"

int mod(int x, int y)
{
	if (y == 0) return 0;
	while (x >= y) {
		x = sub(x, y);
	}
	return 0;
}