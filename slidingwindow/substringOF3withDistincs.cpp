#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.size() < 3) return 0;// important to check
        
        vector<int> f(26, 0);
        int count = 0;

        for (int h = 0; h < 3; h++) {
            f[s[h] - 'a']++;
        }
        int j = 0;
        int c = 0;

        while (j < 26) {
            if (f[j] > 1) {
                c++;
                break;
            }
            j++;
        }

        if (c == 0) {
            count++;
        }    
        for (int i = 3; i < s.size(); i++) {

            f[s[i] - 'a']++;
            f[s[i - 3] - 'a']--; 
            j = 0;
            c = 0;

            while (j < 26) {
                if (f[j] > 1) {
                    c++;
                    break;
                }
                j++;
            }

            if (c == 0) {
                count++;
            }
        }
        return count;
    }
};