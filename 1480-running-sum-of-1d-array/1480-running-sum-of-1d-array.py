class Solution(object):
    def runningSum(self, nums):
        list = []
        sum = 0
        for i in nums:
            sum += i
            list.append(sum)
        return list
        