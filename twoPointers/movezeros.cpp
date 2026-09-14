#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        int j = 0;
        for (int i = 0; i < n; i++) {

            if (nums[i] == 0) {
                count++;
            } else {
                nums[j] = nums[i];
                j++;
            }
        }
        while (j < n) {
            nums[j] = 0;
            j++;
        }
    }
};