#include <iostream>
#include <map>
#include <vector>
#include "../../../../../MinGW/lib/gcc/mingw32/9.2.0/include/c++/bits/algorithmfwd.h"
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> first_map;
        map<int, vector<int>> second_map;
        vector<int> results;

        for (auto element : nums) {
            first_map[element]++;
        }
        for (auto element : first_map) {
            second_map[element.second].push_back(element.first);
        }
        int count = 0;
        for (auto it = second_map.rbegin(); it != second_map.rend(); it++) {
            for(auto element:it->second){
                if(count<k){
                    results.push_back(element);
                    count++;
                }
            }
        }
        return results;
    }
};