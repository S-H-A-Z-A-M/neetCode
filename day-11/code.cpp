#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            0;
            int j = i + 1;
            int k = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            else
            {
                while (j < k)
                {
                    int threesum = nums[i] + nums[j] + nums[k];
                    if (threesum == 0)
                    {
                        result.push_back({nums[i], nums[j], nums[k]});
                        j++;
                        while (nums[j] == nums[j - 1] && j < k)
                        {
                            j++;
                        }
                    }
                    else if (threesum > 0)
                    {
                        k--;
                    }
                    else if (threesum < 0)
                    {
                        j++;
                    }
                }
            }
        }
        return result;
    }
};