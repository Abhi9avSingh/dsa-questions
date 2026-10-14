class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector <int>x(26,0);
        vector<int>b(26,0);
        string s = "balloon";
        int ans =INT_MAX;
        
        for ( int i =0 ; i <s.size();i++){
            b[s[i]-'a']++;
        }
        for ( int i = 0 ; i <text.size();i++){
            x[text[i]-'a']++;
        }
        for ( int i =0 ;i<26 ;i++){
          if (b[i]>0){
            ans = min (ans,x[i]/b[i]);

          }
        }
        return ans;

    }
};