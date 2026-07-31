#include<bits/stdc++.h>

using namespace std;

 vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int s = 0;
        int e = nums.size() - 1;
        int a = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {

                a = mid;
                e = mid - 1;

            } else if (target > nums[mid])
                s = mid + 1;
            else if (target < nums[mid])
                e = mid - 1;
        }
        ans.push_back(a);
        s = 0;
        e = nums.size() - 1;
        a = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {

                a = mid;
                s = mid + 1;

            } else if (target > nums[mid])
                s = mid + 1;
            else if (target < nums[mid])
                e = mid - 1;
        }
        ans.push_back(a);

        return ans;
    }