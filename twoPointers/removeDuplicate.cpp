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



///////part 2

class Solution {
public:
    
 int removeDuplicates(vector<int>& nums) {

    int n = nums.size();

    if (n <= 2) {
        return n;
    }

    int arr[n];

    int i = 0;
    int j = 0;
    int ne = 0;

    while (j < n) {

        // First two positions can be filled directly
        if (i < 2) {
            arr[i] = nums[j];
            i++;
            ne++;
        }

        // Add only if current element is different
        // from the element 2 positions before
        else if (nums[j] != arr[i - 2]) {
            arr[i] = nums[j];
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
 