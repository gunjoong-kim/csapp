long	exchange(long* xp, long y)
{
	long	x;

	x = *xp;
	*xp = y;
	return (x);
}
