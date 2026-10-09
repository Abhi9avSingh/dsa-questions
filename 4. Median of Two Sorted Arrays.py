
class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        arr = nums1 + nums2
        arr.sort()

        n = len(arr)

        if n % 2 == 1:
             median = arr[n // 2]
        else:
             median = (arr[n // 2 - 1] + arr[n // 2]) / 2
        return median 
        