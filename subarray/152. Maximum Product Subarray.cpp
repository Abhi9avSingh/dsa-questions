class Solution:
    def maxProduct(self, nums: list[int]) -> int:
        last = nums[0]
        ans = nums[0]
        mini = nums[0]
        for i in range ( 1,len(nums)):
            a = last *nums[i]
            c = mini * nums[i]
            b = nums[i]
            mini = min ( a,b,c,)
            last = max ( a,b,c)
            ans = max ( ans , last)
        return ans 
        