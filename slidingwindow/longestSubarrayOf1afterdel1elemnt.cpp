#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
    int l =0;
    int count0=0;
    int ans =0;
    
    for ( int h =0;h<nums.size();h++){
         if ( nums[h]==0){
            count0++;
         }
         while ( count0>1){
            if(nums[l]==0){
                count0--;
            }
           
            l++;
         }
         ans = max(ans,h-l);
    }
    
    return ans ;
    }
};