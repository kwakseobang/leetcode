class Solution(object):
    def isPalindrome(self, x):
        res = True if str(x) == str(x)[::-1] else False
        return res