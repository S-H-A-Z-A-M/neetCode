#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int front = 0;
        int back = height.size() - 1;
        int result = 0;
        while (front < back) {
            result =
                max(result, (back - front) * min(height[front], height[back]));

            if (height[front] < height[back]) {
                front++;
            } else {
                back--;
            }
        }
        return result;
    }
};