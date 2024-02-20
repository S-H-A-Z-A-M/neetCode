#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 1) {
            return 0;
        }
        int l = 0;
        int r = height.size() - 1;
        int lmax = height[l];
        int rmax = height[height.size() - 1];
        int count = 0;

        while (l <= r) {
            // formula is min(lmax,rmax) - h[i]
            if (lmax < rmax) {
                if (lmax - height[l] < 0) {
                    lmax = height[l];
                } else {
                    count += lmax - height[l];
                }
                l++;
            } else {
                if (rmax - height[r] < 0) {
                    rmax = height[r];
                } 
                else {
                    count += rmax - height[r];
                }
                r--;
            }
            // cout<<l<<" "<<r<<endl;
        }
        return count;
    }
};