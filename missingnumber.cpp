#include<bits/stdc++.h>

using namespace std;

 int missingNumber(vector<int>& nums) {
        int a,b =0;

        int n = nums.size();
         for ( int i =0; i<n+1;i++){
            a +=i;
            // b+=nums[i];

         }
         for ( int j =0; j<n;j++){
             b+=nums[j];
         }
         return  a-b;
        
    }