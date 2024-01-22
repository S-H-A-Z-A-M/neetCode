#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        int count = 0;
        for (auto element : nums)
        {
            if (m.count(target - nums[count]))
            {
                return {count, m[target - nums[count]]};
            }
            else
            {
                pair<int, int> p(element, count);
                m.insert(p);
            }
            count++;
        }
        return {};
    };
};