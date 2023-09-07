class Solution(object):
    def majorityElement(self, nums):
        set_nums = list(set(nums))
        set_length = len(set_nums)
        biggest = 0
        count = 0
        for i in range(set_length):
            cmp = nums.count(set_nums[i])
            if count < cmp:
                count = cmp
                biggest = i
        return set_nums[biggest]
               