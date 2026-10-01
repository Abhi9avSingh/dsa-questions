#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
         if (s.size()>t.size())
         return false;

         int i =0;
         int j =0;
         while ( i<t.size()){
            if (s[j]==t[i] ){
                i++;
                j++;
            }
            else 
            i++;
         }
         
         return j==s.size();
        
    }
};