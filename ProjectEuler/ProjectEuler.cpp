// ProjectEuler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Problem12.h"
#include <iostream>

int main()
{
	Problem12* problem = new Problem12();
	unsigned long long answer = problem->Solve();
	std::cout << answer;
	int a;
	std::cin >> a;
}
