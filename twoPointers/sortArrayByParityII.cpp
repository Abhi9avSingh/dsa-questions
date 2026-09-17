#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
   vector<int> sortArrayByParityII(vector<int>& nums) {

    int n = nums.size();
    int j = 1;
    int k = 0;

    vector<int> ans = nums;

    for (int i = 0; i < nums.size(); i++) {

        if (ans[i] % 2 == 0) {
            nums[k] = ans[i];
            k += 2;
        }
        else {
            nums[j] = ans[i];
            j += 2;
        }
    }

    return nums;
}
    
};