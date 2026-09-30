#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector <int>g(128,0);
        int count=0;

        for ( int i =0;i<jewels.size();i++){
            g[jewels[i]]++;
        }
         for ( int i =0;i<stones.size();i++){
           if( g[stones[i]]>0){
            count++;
           }
        }
        return count;
        
    }
};