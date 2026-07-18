#include<bits/stdc++.h>

using namespace std;

int findingDuplicate(vector<int>arr){
    
    int ans=0;
    for ( int i=0;i< arr.size();i++){
        ans = ans^arr[i];
    }
     // Step 2: XOR numbers from 1 to n-1
    for (int i = 1; i < arr.size(); i++) {
        ans ^= i;
    }
    return ans;
}
// for multiple duplicate
vector<int> findDuplicates(vector<int>& nums) {
         
     vector<int>ans;
     sort(nums.begin(),nums.end());
     for ( int i =0; i<nums.size()-1;i++){
        if (nums[i]==nums[i+1]){
            ans.push_back(nums[i]);
            i++;
        }
     }
     return ans;
     }
int main (){
    vector<int>arr={1,2,4,5,3,5};
   cout<< "  "<< findingDuplicate(arr);
}