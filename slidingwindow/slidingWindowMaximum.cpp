#include<bits/stdc++.h>

using namespace std;
// <------------------TLE --------------->

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i =0;
        vector<int>ans;
          
        
      
       while ( i <= nums.size()-k){
          int j =i;
          int maxi =INT_MIN;
             while ( j<i+k){
              
                maxi= max(maxi,nums[j]);
               
                j++;
             }
              ans.push_back(maxi);
             
             i++;
       }
        return ans;
    }
};