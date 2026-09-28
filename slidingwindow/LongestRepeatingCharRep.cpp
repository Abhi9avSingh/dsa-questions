#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int characterReplacement(string s, int k) {
        int l =0;
        int ans =0;
        int maxFreq=0; 
        int f[26]={0};

        for ( int h =0;h<s.size();h++){
          f[s[h]-'A']++;

          maxFreq=max(maxFreq,f[s[h]-'A']);

            
            while (h-l+1-maxFreq>k){
                 f[s[l]-'A']--;
                 l++;
                    }
                   
                
            ans = max(ans,h-l+1);

        }
        return ans ;
    }
};