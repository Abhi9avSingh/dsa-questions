#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums.size();
        int ans =(nums[a-1]-1 )* (nums[a-2]-1);
        int b ;

        return ans;
    }
};
