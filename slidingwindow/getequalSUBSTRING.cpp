#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0;
        int cost = 0;
        int ans = 0;

        for (int h = 0; h < s.size(); h++) {
            cost += abs(s[h] - t[h]);
            while (cost > maxCost) {
                cost -= abs(s[l] - t[l]);
                l++;
            }
            ans = max(ans, h - l + 1);
        }
        
         return ans;
    }
   

};