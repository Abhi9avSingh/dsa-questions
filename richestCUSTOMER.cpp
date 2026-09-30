#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       
        int maxi=0;
        for ( int i =0;i<accounts.size();i++){
            int j=0;
             int sum=0;
              while (j<accounts[i].size()){
                sum += accounts[i][j];
               
                j++;
              }
               maxi = max(maxi,sum);
        }
        return maxi;
    }
};