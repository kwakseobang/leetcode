class Solution(object):
    def countPairs(self, nums, target):
      
        count = 0
        length = len(nums)
        for i in range(length-1):
            for j in range(i+1,length):
                if (nums[i] + nums[j]) < target:
                    count += 1
        return count
        