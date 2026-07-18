#include<bits/stdc++.h>

using namespace std;
 vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> a;
    vector<int> ans;

    for (int i = 1; i <= nums.size(); i++) {
        a.push_back(i);
    }

    for (int i = 0; i < a.size(); i++) {
        int flag = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (a[i] == nums[j]) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            ans.push_back(a[i]);
        }
    }
    

    return ans;
