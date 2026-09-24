#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i = 0;
        while (i < s.size()) {
            if (s[i] != t[i]) {
                return false;
                break;
            }
            i++;
           
        }
        return true;
    }
};


/////////////// most optimized approach is frequency which i didnt study yet //
