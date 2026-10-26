class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>frq(nums.size(),0);
        int i =0;
        while (  i < nums.size()){
            frq[nums[i]]++;
            if (frq[nums[i]]>1)
            return nums[i];
            i++;
        }
        return -1;
    }
};