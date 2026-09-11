#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>ans = nums;
        int a =0;
        int b=0;
        int count =0;

        
      
        sort( nums.begin(),nums.end());

            


         for ( int i =0; i<nums.size();i++){
            if ( ans[i]!=nums[i]){
                a =i;
                break;
                  
            }
         }
          for ( int i =nums.size()-1; i>0;i--){
            if ( ans[i]!=nums[i]){
                b =i;
                break;
                  
            }
         }
      if ( a==b){
        return count ;
      }
      else{
            count =  (b-a)+1;}
         
        

return count ;
        
    }
};