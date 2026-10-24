class Solution:
    def maxAbsoluteSum(self, nums: list[int]) -> int:
        last = nums[0]
        mini = nums[0]
        ans = abs(nums[0])

        for i in range(1, len(nums)):
            a = last + nums[i]
            b = nums[i]

            last = max(a, b)
            mini = min(mini + nums[i], nums[i])

            ans = max(ans, last, abs(mini))

        return ans
        