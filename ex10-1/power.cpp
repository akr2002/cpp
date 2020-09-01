// The power function called from ex10-1.cpp is defined in a different translation unit

double power(double x, int n)
{
	if (n == 0)	return 1.0;
	else if (n > 0)	return x * power(x, n -1);
	else /*n < 0*/	return 1.0 / power(x, -n);
}
