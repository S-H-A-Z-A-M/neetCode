#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        if (tokens.size() == 1)
        {
            return stoi(tokens[0]);
        }
        stack<int> st;
        int i = 0;
        int a, b;
        st.push(stoi(tokens[i++]));
        st.push(stoi(tokens[i++]));
        while (!st.empty())
        {
            if (tokens[i] == "+")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                st.push(a + b);
            }
            else if (tokens[i] == "-")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                st.push(b - a);
            }
            else if (tokens[i] == "*")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                st.push(a * b);
            }
            else if (tokens[i] == "/")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                st.push(b / a);
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
            if (i == tokens.size() - 1)
            {
                return st.top();
            }
            i++;
        }
        return 0;
    }
};