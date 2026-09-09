#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

           sort(nums.begin(), nums.end());

           int n = nums.size();
            int closest = nums[0] + nums[1] + nums[2];
        for ( int i =0; i <n-2;i++){

            int l =i+1;
            int r = nums.size()-1;
           

            while ( l<r){
                 int sum = nums [i]+nums[l]+nums[r];
                if ( sum ==target){
                    return sum ;
                }
                    if (abs(sum - target) < abs(closest - target)) {
                    closest = sum;
                }

                if ( sum > target){
                    r--;
                }
                else {
                    l++;
                }
            }
        }
        return closest;
        
    }
};