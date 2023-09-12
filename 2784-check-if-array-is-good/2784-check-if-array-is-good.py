class Solution(object):
    def isGood(self, nums):
        nums.sort()
        if len(nums) != (nums[-1]+1):
            return False
        elif nums.count(nums[-1]) != 2:
            return False
        for i in range(len(nums)-2):
            if nums[i] != (i+1):
                return False
        return True
        