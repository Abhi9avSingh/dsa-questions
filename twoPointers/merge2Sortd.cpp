#include <bits/stdc++.h>

using namespace std;

// memory limit exceed 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
int j = 0;
        vector<int>ans;
        
      while (i < m && j < n){
        if ( nums1[i]<=nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }
        else {
            ans.push_back(nums2[j]);
            j++;
        }
        }

        while ( i<m){
            ans.push_back(nums1[i]);
            i++;
        }
         while ( j<n){
            ans.push_back(nums2[j]);
            i++;
        }
        for ( int z =0;z<m+n;z++){
            nums1[z]=ans[0];
        }
        
    }
};

////// optimal solution 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    int i = m - 1;      // Last actual element of nums1
    int j = n - 1;      // Last element of nums2
    int k = m + n - 1;  // Last position of nums1

    while (i >= 0 && j >= 0) {

        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        }
        else {
            nums1[k] = nums2[j];
            j--;
        }

        k--;
    }

    // Copy remaining nums2 elements
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}