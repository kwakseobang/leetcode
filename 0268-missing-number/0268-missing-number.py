class Solution(object):
    def missingNumber(self, nums):
        for i in range(len(nums)+1):
            if 0 == nums.count(i):
                return i
        