class Solution:
    def hammingWeight(self, x: int) -> int:
        ret = 0
        while x > 0:
            ret += 1 * (x & 0x01)
            x >>= 1
        return ret

    def sortByBits(self, arr: List[int]) -> List[int]:
        hmap = dict()
        for x in arr:
            val = self.hammingWeight(x)
            if val in hmap:
                hmap[val].append(x)
            else:
                hmap[val] = [x]
        
        # set the return value
        ret = list()
        for k in sorted(hmap.keys()):
            ret.extend(sorted(hmap[k]))
        return ret