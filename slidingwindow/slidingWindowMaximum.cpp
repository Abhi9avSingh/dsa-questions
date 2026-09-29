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



// with deque

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> dq;

        for (int i = 0; i < n; i++) {
            // Remove indices outside the window
            if (!dq.empty() && dq.front() <= i - k) 
                dq.pop_front();

            // Maintain decreasing order in deque
            while (!dq.empty() && nums[dq.back()] <= nums[i]) 
                dq.pop_back();

            dq.push_back(i);

            // Add maximum for the current window
            if (i >= k - 1) 
                ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};