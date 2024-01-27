#include <iostream>
#include <unordered_map>
#include <vector>
#include "../../../../../MinGW/lib/gcc/mingw32/9.2.0/include/c++/bits/algorithmfwd.h"
using namespace std;

class Solution
{
public:
    string sortingElement(string S)
    {
        sort(S.begin(), S.end());
        return S;
    }

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mymap;
        int count = 0;
        vector<vector<string>> words;

        for (auto anagram : strs)
        {
            if (!mymap.count(sortingElement(anagram)))
            {
                mymap[sortingElement(anagram)] = vector<string>();
                mymap[sortingElement(anagram)].push_back(strs[count]);
            }
            else
            {
                mymap[sortingElement(anagram)].push_back(strs[count]);
            }
            count++;
        }
        int num = 0;
        for (const auto &pair : mymap)
        {
            words.push_back(pair.second);
        }
        return words;
    }
};