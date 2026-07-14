#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> mp;

        for(int x:arr)
            mp[x]++;

        unordered_set<int> s;

        for(auto x:mp){

            if(s.count(x.second))
                return false;

            s.insert(x.second);
        }

        return true;
    }
};