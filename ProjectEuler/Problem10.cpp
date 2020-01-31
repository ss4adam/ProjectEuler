#include "stdafx.h"
#include "Problem10.h"
#include <vector>


Problem10::Problem10()
{
}


Problem10::~Problem10()
{
}

unsigned long long Problem10::Solve() //Only takes 53 seconds minute, making it an array is much faster than vector.push_back()
{
	static int primeNumbers[2000000] = {};
	primeNumbers[0] = 2; // "prime" the pump ;)
	int primeCount = 1;

	for (int i = 3; i < 2000000; i = i + 2)
	{
		for (int j = 0; j < primeCount; j++)
		{
			if (i % primeNumbers[j] == 0)
			{
				break;
			}
			if (j == primeCount - 1) // we made it to the end without breaking so add the item to the array of prime numbers
			{
				primeNumbers[primeCount] = i;
				primeCount++;
			}
		}
	}

	unsigned long long sum = 0;
	for (int i = 0; i < 2000000; i++)
		sum += primeNumbers[i];
	return sum;
}

//unsigned long long Problem10::Solve() // 11 minutes, but the algorithm should be faster?
//{
//	std::vector<int> primeNumbers;
//	primeNumbers.push_back(2); // "prime" the pump ;)
//	int primeCount = 1;
//
//	for (int i = 3; i < 2000000; i = i+2)
//	{
//		for (int j = 0; j < primeCount; j++)
//		{
//			if (i % primeNumbers[j] == 0)
//			{
//				break;
//			}
//			if (j == primeCount - 1) // we made it to the end without breaking so add the item to the array of prime numbers
//			{
//				primeNumbers.push_back(i);
//				primeCount++;
//			}
//		}
//	}
//
//	unsigned long long sum = 0;
//	for (int i = 0; i < primeNumbers.size(); i++)
//		sum += primeNumbers[i];
//	return sum;
//}

//unsigned long long Problem10::Solve() // very slow and brute force 11 mintes to run
//{
//	std::vector<int> primeNumbers;
//	for (int i = 2; i < 2000000; i++)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			if (j == i-1) // we made it to the end without breaking so add the item to the array of prime numbers
//				primeNumbers.push_back(i);
//		}
//	}
//
//	unsigned long long sum = 0;
//	for (int i = 0; i < primeNumbers.size(); i++)
//		sum += primeNumbers[i];
//	return sum+2; //2 gets missed in the above algorithm
//}


//unsigned long long Problem10::Solve() // very slow and brute force arrays 14 mintes to run
//{
//	static int primeNumbers[2000000] = {};
//	primeNumbers[0] = 2;
//	int primeNumbersCount = 1;
//
//	for (int i = 3; i < 2000000; i= i+2)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			if (j == i - 1) // we made it to the end without breaking so add the item to the array of prime numbers
//			{
//				primeNumbers[primeNumbersCount] = i;
//				primeNumbersCount++;
//			}
//		}
//	}
//
//	unsigned long long sum = 0;
//	for (int i = 0; i < primeNumbersCount; i++)
//		sum += primeNumbers[i];
//	return sum; //2 gets missed in the above algorithm
//}