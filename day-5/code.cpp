#include <iostream>
#include <map>
#include <vector>
#include "../../../../../MinGW/lib/gcc/mingw32/9.2.0/include/c++/bits/algorithmfwd.h"
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> front{1};
        vector<int> back(nums.size(), 0);
        int front_count = 1;
        int back_count = 1;

        for (auto element : nums) {
            front_count *= element;
            front.push_back(front_count);
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            back_count *= nums[i];
            back[i] = back_count;
        }
        back.push_back(1);

        for (int i = 0; i < nums.size(); i++) {
            int result = front[i] * back[i + 1];
            nums[i] = result;
        }

        return nums;
    }
};