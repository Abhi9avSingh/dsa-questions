#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0;
        int max1 = INT_MIN;
        
        
        for ( int h=0;h<nums.size();h++){
            if(nums[h]!=1){
                max1 = max(max1,h-l);
                l=h+1;

            }
        }
         max1 = max(max1,(int)nums.size()-l);
        return max1;
    }
};