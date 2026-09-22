#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int a=0;
        for ( int i =0;i<nums.size();i++){
            int sum =0;
            int n = nums[i];
            while ( n!=0){
                sum = sum + n%10;
                n=n/10;
            }
            if ( i == sum){
                return i;
                break;
                a++;

            }
             
        }
        if ( a==0){
            return -1;
        }
        return {};
    
    }
};