#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    string checking(string s)
    {
        string result;
        for (auto element : s)
        {
            if (!(65 <= element && element <= 90))
            {
                if (!(97 <= element && element <= 122))
                {
                    if (!(48 <= element && element <= 57))
                    {
                        continue;
                    }
                    else
                    {
                        result += element;
                    }
                }
                else
                {
                    // cout<<element;
                    result += element;
                }
            }
            else
            {
                result += tolower(element);
            }
        }
        return result;
    }

    bool isPalindrome(string s)
    {
        s = checking(s);
        int n = s.size();
        int front = 0;
        int back = n - 1;
        int flag = 0;
        if (n == 0 || n == 1)
        {
            return true;
        }
        while (front < back)
        {
            if (s[front] != s[back])
            {
                return false;
            }
            else
            {
                flag = 1;
            }
            front++;
            back--;
        }
        if (flag == 1)
            return true;
        else
            return false;
    };
};
