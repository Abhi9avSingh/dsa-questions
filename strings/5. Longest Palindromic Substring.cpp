
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int maxLen = 1;

        for (int b = 0; b < n; b++) {

            // Odd length palindrome
            int i = b, j = b;

            while (i >= 0 && j < n && s[i] == s[j]) {
                if (j - i + 1 > maxLen) {
                    start = i;
                    maxLen = j - i + 1;
                }
                i--;
                j++;
            }

            // Even length palindrome
            i = b;
            j = b + 1;

            while (i >= 0 && j < n && s[i] == s[j]) {
                if (j - i + 1 > maxLen) {
                    start = i;
                    maxLen = j - i + 1;
                }
                i--;
                j++;
            }
        }

        return s.substr(start, maxLen);
    }
};
