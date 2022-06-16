class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False
        
        m1 = dict()
        m2 = dict()

        for i, c in enumerate(s):
            if c in m1:
                m1[c] += 1
            else:
                m1[c] = 1
            if t[i] in m2:
                m2[t[i]] += 1
            else:
                m2[t[i]] = 1

        for k in m1:
            if m1[k] != m2[k]:
                return False

        return True