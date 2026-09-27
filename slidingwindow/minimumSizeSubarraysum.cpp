#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     
     int l =0;
     int sum =0;
     int res = INT_MAX;
     int n = nums.size();
       for( int h =0;h<n;h++){
        sum +=nums[h];

        while ( sum>=target){
            res = min( res,h-l+1);
            sum-=nums[l];
            l++;
        }
       }
       if(res ==INT_MAX)
       return 0;
        return res;
    }
};
