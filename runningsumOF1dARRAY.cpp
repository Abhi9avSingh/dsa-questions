#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum =0;
        vector<int>ans;
        int i=0;
        while ( i <nums.size()){
            sum+=nums[i];
            i++;
            ans.push_back(sum);
        }
        return ans;
    }
};
