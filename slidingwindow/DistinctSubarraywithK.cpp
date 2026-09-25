#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        long long sum = 0;
        long long Rsum = 0;

        unordered_map<int, int> freq;

         for (int i = 0; i < k; i++) {
            sum += nums[i];
            freq[nums[i]]++;
        }

         if (freq.size() == k) {
            Rsum = sum;
        }

         for (int i = k; i < n; i++) {

            
            sum += nums[i];
            freq[nums[i]]++;

             
            sum -= nums[i - k];
            freq[nums[i - k]]--;

             if (freq[nums[i - k]] == 0) {
                freq.erase(nums[i - k]);
            }

             
            if (freq.size() == k) {
                Rsum = max(Rsum, sum);
            }
        }

        return Rsum;
    }
};