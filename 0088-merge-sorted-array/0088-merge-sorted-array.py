class Solution(object):
    def merge(self, nums1, m, nums2, n):
        index = 0
        for i in range(m,m+n):
            nums1[i] = nums2[index]
            index += 1
        nums1.sort()