class Solution(object):
    def sortColors(self, nums):
        for x in range(len(nums)-1,0,-1):
            largest = x
            for i in range(x):
                if nums[largest] < nums[i]:
                    largest = i
            nums[largest],nums[x] = nums[x], nums[largest]