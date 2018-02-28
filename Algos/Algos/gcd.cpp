#include "stdafx.h"
#include "gcd.h"

int gcd(int m, int n)
{
	int r;
	if (m > n)
	{
		r = m%n;

	}
	else
	{
		r = n%m;
	}
	if (r == 0)
		return m > n ? n : m;
	else
	{
		if (m > n)
		{
			m = n;
			n = r;
		}
		else
		{
			n = m;
			m = r;
		}
		return gcd(m, n);
	}
}