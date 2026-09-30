#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int h=0;
        int ans =0;
        while (h<nums.size()){
            int diff = nums[h]-nums[l];
            if(diff==1){
              
                ans = max( ans,h-l+1);
                  h++;
            }
            else if ( diff>1){
                l++;
            }
            else h++;
        }
        return ans;
    }
};