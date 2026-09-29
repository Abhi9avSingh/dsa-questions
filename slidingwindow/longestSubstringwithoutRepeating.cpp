#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>f(256,0);
        int l=0;
        int ans=0;

        for ( int h=0;h<s.size();h++){
            f[s[h]]++;

            while ( f[s[h]]>1){
                f[s[l]]--;
             
             l++;
            }
            ans = max(ans,h-l+1);
        }
        return ans;
        
    }
};