#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.size() != t.size())
        {
            return false;
        }

        vector<int> alphaArrayS(26, 0);
        vector<int> alphaArrayT(26, 0);

        int starting_value = 97;

        for (int i = 0; i < s.size(); i++)
        {
            int indexS = int(s[i]) - 97;
            alphaArrayS[indexS]++;

            int indexT = int(t[i]) - 97;
            alphaArrayT[indexT]++;
        }

        return alphaArrayS == alphaArrayT;
    }
};