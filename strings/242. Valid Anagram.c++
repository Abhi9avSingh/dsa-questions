class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        int freq1[26] = {0};
        

        for (int i = 0; i < s.size(); i++) {
            freq1[s[i] - 'a']++;
            freq1[t[i] - 'a']--;
        }
        int count =0;
         for (int i = 0; i < s.size(); i++) {
            if (freq1[s[i] - 'a'] !=0)
            count ++;
        }

        if (count ==0)
        return true;

        return false ;
    }
};