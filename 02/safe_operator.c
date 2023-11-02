#include "chapter2.h"

int	tadd_ok_wrong_ver(int x, int y)
{
	int	sum;

	sum = x + y;
	return ((sum - x == y) && (sum - y == x));
}

int tadd_ok(int x, int y)
{
	int	sum;

	sum = x + y;
	if (x > 0 && y > 0 && sum <= 0)
		return (-1);
	else if (x < 0 && y < 0 && sum >= 0)
		return (-1);
	return (1);
}

int	tsub_ok_wrong_ver(int x, int y)
{
	// We always have to check when y is INT_MIN
	return (tadd_ok(x, -y));
}

int	tsub_ok(int x, int y)
{
	int	sum;

	sum = x - y;
	if (x > 0 && y < 0 && sum <= 0)
		return (-1);
	else if (x < 0 && y > 0 && sum >= 0)
		return (-1);
	return (1);
}