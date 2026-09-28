#include<bits/stdc++.h>

using namespace std;





class Solution {
public:
    bool six(vector<int>& count1, vector<int>& count2) {
        for (int i = 0; i < 26; i++) {
            if (count1[i] > count2[i]) {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int l = 0;
        vector<int> count1(26, 0);
        vector<int> count2(26, 0);
        vector<int> ans;

        for (int i = 0; i < p.size(); i++) {
            count1[p[i] - 'a']++;
        }

        for (int h = 0; h < s.size(); h++) {
            count2[s[h] - 'a']++;
            while (h - l + 1 == p.size()) {
                if (six(count1, count2)) {
                    ans.push_back(l);
                }
                count2[s[l] - 'a']--;
                l++;
            }
        }
        return ans;
    }
};