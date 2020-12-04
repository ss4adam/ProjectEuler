#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    // two pass
    vector<int> twoSum2Pass(vector<int>& nums, int target)
    {
        std::unordered_map<int, int> map; //first number is original index, next number is the value
        vector<int> answer;

        // insert all values in a map (hashmap)
        for (int i = 0; i < nums.size(); i++)
        {
            map.insert(pair<int, int>(nums[i], i));
        }

        // now loop through again and see if the complement exists
        for (int i = 0; i < nums.size(); i++)
        {
            std::unordered_map<int, int>::const_iterator it = map.find(target - nums[i]);
            if (it != map.end() && it->second != i) // 'first' is value 'second' is index. leedcode is asking for the index
            {
                answer.push_back(i);
                answer.push_back(it->second);
                return answer;
            }
        }
        return answer; // if nothing is hit
    }

    // one pass
    vector<int> twoSum1Pass(vector<int>& nums, int target)
    {
        std::unordered_map<int, int> map; //first number is original index, next number is the value
        vector<int> answer;

        // insert all values in a map (hashmap)
        for (int i = 0; i < nums.size(); i++)
        {
            // step one is to see if we have ever seen the complement before, we do this by checking the hashmap. If we ever find the answer then we are done
            std::unordered_map<int, int>::const_iterator it = map.find(target - nums[i]);
            if (it != map.end() && it->second != i) // 'first' is value 'second' is index. leedcode is asking for the index
            {
                answer.push_back(it->second);
                answer.push_back(i);
                return answer;
            }

            //step two is to insert the value if the complement wasn't found
            map.insert(pair<int, int>(nums[i], i)); 
        }
        return answer; // if nothing is hit
    }
};