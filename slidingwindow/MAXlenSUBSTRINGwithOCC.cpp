#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0;
        int h =0;
        int ans =0;
        vector<int>f(26,0);
        while ( h<s.size()){
            f[s[h]-'a']++;
            while(f[s[h]-'a']>2){
             
                f[s[l]-'a']--;
                l++;
            }
             ans = max(ans,h-l+1);

            h++;
        }
        return ans;
    }
};