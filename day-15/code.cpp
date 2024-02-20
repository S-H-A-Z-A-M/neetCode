#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    MinStack() {}

    void push(int val)
    {
        if (st.size() < 1)
        {
            st.push_back(make_pair(val, val));
        }
        else
        {
            // int currMin = min(val,st.back().second);
            st.push_back(make_pair(val, min(val, st.back().second)));
        }
    }

    void pop()
    {
        st.pop_back();
    }

    int top() { return st.back().first; }

    int getMin() { return st.back().second; }

private:
    std::vector<std::pair<int, int>> st;
};