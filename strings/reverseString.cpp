#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n =s.size()-1;
        
          for ( int i =n;i>n/2;i--){
            swap(s[n-i],s[i]);
          }  
    }
};