class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>ans;
        vector<int>res;
        for ( int i =0;i <nums.size();i++){
        m[nums[i]]++;
        }
        for ( auto i : m){
            ans.push_back (i.first);
        }
        sort( ans.begin(),ans.end(),[&](int a , int b ){
            return m[a]>m[b];
        });
        for ( int i =0;i<k;i++){
            res.push_back(ans[i]);
        }
        return res;
    }
};