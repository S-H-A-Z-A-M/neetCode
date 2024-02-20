#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int front = 0;
        int back = numbers.size() - 1;

        while (front < back)
        {
            int value = numbers[front] + numbers[back];
            if (value == target)
            {
                return {front + 1, back + 1};
            }
            else if (value < target)
            {
                front++;
            }
            else
            {
                back--;
            }
        }
        return {};
    }
};