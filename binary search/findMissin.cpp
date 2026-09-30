#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int a = nums[0];
        for ( int i=0;i<nums.size();i++){
            while ( a !=nums[i]){
            ans.push_back(a) ;
            a++;}
            a++;
        }
        return ans;
    }
};