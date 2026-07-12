#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>d;
            for(int i =0;i<nums.size();i++){
            int t = target - nums[i];
            if(d.find(t)!=d.end()){
                ans.push_back(d[t]);
                ans.push_back(i);
                break;
            }
            d[nums[i]]=i;
        }
        return ans;
    }