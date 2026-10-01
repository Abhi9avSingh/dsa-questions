#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size()>magazine.size())
        return false;
        int f [26]={0};
         
        for ( int i:magazine){
            f[i-'a']++;
        }
        int count=0;
        for (int i:ransomNote){
            if(f[i-'a']>=1){
                count++;
                 f[i-'a']--;
            }
        }
        if ( count==ransomNote.size()){
            return true;
        }
        return false;
    }
};