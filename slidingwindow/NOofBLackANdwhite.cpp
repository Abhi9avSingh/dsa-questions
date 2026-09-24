#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        vector <int>ans;
       
        int i =0;
        int j =k;
        int n = blocks.size();
        while ( j <=n){
             int count =0;
             for ( int x=i ; x<j;x++){
            if ( blocks[x]=='W'){
                count++;
            }
            
        }
        ans.push_back(count);
        i++;
        j++;
        }
        int result = *min_element(ans.begin(), ans.end());
        return result ;
    }
};


////// OPTIMIZED APPROACH /////

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int count = 0;
        int result = INT_MAX;

        // First window
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                count++;
            }
        }

        result = count;

        // Slide the window
        for (int i = k; i < n; i++) {

            // Add the new character
            if (blocks[i] == 'W') {
                count++;
            }

            // Remove the character leaving the window
            if (blocks[i - k] == 'W') {
                count--;
            }

            result = min(result, count);
        }

        return result;
    }
};