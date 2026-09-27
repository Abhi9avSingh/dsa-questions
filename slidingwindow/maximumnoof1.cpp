#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l =0; 
        int n = nums.size();
        int count0=0;
        int ans = INT_MIN;

        for (int  h=0;h<n;h++){
           
            if ( nums[h]==0){
                 
                count0++;
            }
            while ( count0>k){
                if ( nums[l]==0){
                    count0--;
                }
                l++;

            }
            ans = max(ans,h-l+1);

        }
        return ans;
    }
};