class Solution {
public:
    string sum ( string s){
        int r =0;
        int a =0;
        while (s.size()>a){
       r = r + s[a]-'0';
        a++;
        }
        return to_string(r) ;
    }
    string digitSum(string s, int k) {
       string n ;
       while (s.length()>k ){
        n = "";
        for ( int i =0;i <s.length();i+=k) {
            n = n + sum(s.substr(i,k));
        }
        s= n;
       } 
       return s ;
    }
};