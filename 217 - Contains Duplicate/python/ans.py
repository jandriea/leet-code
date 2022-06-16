class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        m = dict()
        for x in nums:
            if x in m:
                return True
            else:
                m[x] = True
        return False