#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort ( nums.begin (),nums.end());

      
        int n =nums.size();
       
        
        vector<vector<int >>result;
       
          
      for ( int l =0;l<n-2;l++){
         
          int i =l+1;
           int j = nums.size()-1;
        if ( l>0 && nums[l]==nums[l-1]){
            continue;
        }
        int sum = -nums[l];
        while ( i<j){
            int s =  nums [i]+ nums [j];
            if ( s== sum){
                result.push_back({
                        nums[l],
                        nums[i],
                        nums[j]
                    });
                i++;
                j--;
                while ( i <j && nums[i]==nums[i-1]){
                    i++;
                }
                while ( i <j  && nums[j]==nums[j+1]){
                    j--;
                }
                
            }
            else if ( s < sum ){
                i++;
            }
            else {
                j--;
            }
        }

      }
      return result ;

    }
};