class Solution {
public:
    int longestPalindrome(string s) {
        if ( s.size() == 1 ){
            return s.size();
        }
        vector<int>m(128,0);
        int res = 0;
        for( int i =0;i<s.size();i++){
             m[s[i]]++;
        }
        bool flag = false;
        for( int i =0;i<128;i++){
            if(m[i]%2==0){
                res += m[i];
            }
            else if (m[i]%2!=0 && flag == false){
                res +=  m[i];
                flag = true ;
            }
            else{
                res += m[i]-1;
            }
        }
        return res;

    }
};