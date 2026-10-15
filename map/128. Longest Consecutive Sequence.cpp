class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        int maxi = 0;

        for (auto it : s) {
            if (s.find(it - 1) == s.end()) {
                int curr = 1;
                int num = it;
                while (s.find(num + 1) != s.end()) {
                    curr++;
                    num++;
                }
                 maxi = max(maxi, curr);
        }
            }

           
        return maxi;
    }
};