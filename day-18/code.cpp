#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<double, double>> spePos(position.size());
        vector<double> time;

        for (int i = 0; i < spePos.size(); i++) {
            spePos[i] = make_pair(position[i], speed[i]);
        }
        sort(spePos.begin(), spePos.end());

        for (auto ele : spePos) {
            double lala = (target - ele.first);
            double dada = ele.second;
            double zaza = lala/double(dada);
            time.push_back(zaza);
        }

        int counter = 1;
        double curr = time[time.size() - 1];
        for (int i = time.size() - 2; i >= 0; i--) {
            if (time[i] > curr) {
                counter++;
                curr = time[i];
            }
        }
        return counter;
    }
};