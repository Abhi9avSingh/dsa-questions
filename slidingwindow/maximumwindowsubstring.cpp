#include<bits/stdc++.h>

using namespace std;


<-----------------------------------------------------memory limit exceed--------->
class Solution {
public:
    bool ghj(vector<int>& count1, vector<int>& count2) {
        for (int i = 0; i < 256; i++) {
            if (count1[i] > count2[i])
                return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        int l = 0;
        vector<int> count1(256, 0);
        vector<int> count2(256, 0);
        string ans;
        int minLen = INT_MAX;

        for (int i = 0; i < t.size(); i++) {
            count1[t[i]]++;
        }

        for (int h = 0; h < s.size(); h++) {
            count2[s[h]]++;
            while (ghj(count1, count2)) {
                int len = h - l + 1;
                if (len < minLen) {
                    minLen = len;
                    ans = s.substr(l, len);
                }
                count2[s[l]]--;
            l++;
            }
            
        }
        return ans;
    }
    
    
};