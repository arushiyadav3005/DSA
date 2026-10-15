class Solution(object):
    def sumCounts(self, nums):
        ans = 0
        n = len(nums)
        for i in range(n):
           distinctSet = set()
           for j in range(i, n):
             distinctSet.add(nums[j])
             ans += len(distinctSet) ** 2
        return ans
    