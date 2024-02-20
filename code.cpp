#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        std::ios::sync_with_stdio(false);
        stack<pair<int, int>> st;
        int n = heights.size();
        int area = 0;

        for (int i = 0; i < n; i++)
        {
            int start = i;
            while (!st.empty() && st.top().second > heights[i])
            {
                pair<int, int> ele = st.top();
                st.pop();
                area = max(area, ele.second * (i - ele.first));
                start = ele.first;
            }
            st.push({start, heights[i]});
        }

        while (!st.empty())
        {
            pair<int, int> ele = st.top();
            area = max(area, ele.second * (n - ele.first));
            st.pop();
        }
        return area;
    }
};