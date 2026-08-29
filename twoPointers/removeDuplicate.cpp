#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int j = 0;
        int ne = 1;
        int n = nums.size();

        int arr[n];

        arr[0] = nums[0];
        while (j < n - 1) {

            if (nums[j] != nums[j + 1]) {
                arr[i] = nums[j + 1];
                i++;
                ne++;
            }

            j++;
        }

        for (int k = 0; k < ne; k++) {
            nums[k] = arr[k];
        }

        return ne;
    }
};