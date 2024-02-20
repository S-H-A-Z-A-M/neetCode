#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &t)
    {
        stack<pair<int, int>> st;
        vector<int> result(t.size(), 0);
        if (t.size() == 1)
        {
            return {0};
        }
        // int j = 0;
        pair<int, int> pair1 = {t[0], 0};
        st.push(pair1);
        for (int i = 1; i < t.size(); i++)
        {
            pair<int, int> head = st.top();
            if (head.first < t[i])
            {
                while (head.first < t[i])
                {
                    result[head.second] = (i - head.second);
                    st.pop();
                    // j++;
                    if (st.empty())
                    {
                        break;
                    }
                    head = st.top();
                }
                pair<int, int> pair = {t[i], i};
                st.push(pair);
            }
            else
            {
                pair<int, int> pair = {t[i], i};
                st.push(pair);
            }
        }
        return result;
    }
};