#include "stdafx.h"
#include "Problem9.h"


Problem9::Problem9()
{
}


Problem9::~Problem9()
{
}

int Problem9::Solve()
{
	bool working = true;
	bool workingOnA = true;
	bool workingOnB = true;
	bool workingOnC = true;

	while (working)
	{
		int a = 0;
		while (a < 998)
		{
			a++;
			int b = 0;
			while (b < 998)
			{
				int c = 0;
				b++;
				while (c < 998)
				{
					c++;
					if (a + b + c == 1000)
					{
						if (a * a + b * b == c * c)
							return a*b*c;
					}
				}
			}
		}
	}
	
}
