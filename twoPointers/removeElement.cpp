#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
   int removeElement(vector<int>& nums, int val) {

    vector<int> ans;
    int n = 0;

     
    for (int i = 0; i < nums.size(); i++) {

        if (val != nums[i]) {
            ans.push_back(nums[i]);
            n++;
        }
    }

     
    for (int i = 0; i < n; i++) {
        nums[i] = ans[i];
    }

    return n;
}
};