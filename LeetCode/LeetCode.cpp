// LeetCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "TwoSum.cpp"

int main()
{

    Solution s;
    vector<int> v1{ 3, 2, 4 };
    int target = 6;

    vector<int> answer;
    // answer = s.twoSum2Pass(v1, target);
    answer = s.twoSum1Pass(v1, target);
        
    //print the values
    std::cout << "Answer is: ";
    for(int i : answer)
        std::cout << i << ",";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
