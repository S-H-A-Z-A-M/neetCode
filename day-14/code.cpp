#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        bool flag = false;

        for (auto element : s) {
            if (element == ')') {
                if (!p.empty() && p.top() == '(') {
                    p.pop();
                    flag = true;
                } else {
                    return false;
                }
            } else if (element == '}') {
                if (!p.empty() && p.top() == '{') {
                    p.pop();
                    flag = true;

                } else {
                    return false;
                }
            } else if (element == ']') {
                if (!p.empty() && p.top() == '[') {
                    p.pop();
                    flag = true;

                } else {
                    return false;
                }
            } else {
                p.push(element);
            }
        }
        if (p.empty() && flag) {
            return true;
        }
        return false;
    }
};