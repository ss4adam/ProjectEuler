#pragma once
class Problem11
{
public:
	Problem11();
	~Problem11();
	unsigned long long Solve();
private:
	unsigned long long SolveIndex(int index1, int index2);
	unsigned long long ProductRight(int index1, int index2);
	unsigned long long ProductDown(int index1, int index2);
	unsigned long long ProductDiagDownLeft(int index1, int index2);
	unsigned long long ProductDiagDownRight(int index1, int index2);
};

