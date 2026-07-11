#include<bits/stdc++.h>

using namespace std;
  bool isPalindrome(int x) {
        long long  number=0 ; 
        int b =x;
        if(x<0)
        return 0;
        while (b!=0){
        int digit  = b%10;
        number = number*10 + digit ;
        b = b/10;
        }
       return x ==number;
    }