#include<bits/stdc++.h>

using namespace std;

  int findMin(vector<int>& nums) {
          int s = 0;
          int e = nums.size()-1;

           while ( s <e){
            int mid = s + ( e-s)/2;
            if ( nums[mid] > nums[e] ){
                 s = mid +1;

            }
            else 
            e = mid;
 
           }
          return nums[s];
    }