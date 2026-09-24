#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        vector <int>ans;
       
        int i =0;
        int j =k;
        int n = blocks.size();
        while ( j <=n){
             int count =0;
             for ( int x=i ; x<j;x++){
            if ( blocks[x]=='W'){
                count++;
            }
            
        }
        ans.push_back(count);
        i++;
        j++;
        }
        int result = *min_element(ans.begin(), ans.end());
        return result ;
    }
};