class Solution:
    # method 1
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        # convert the order to hash map
        hmap = {c : i for i, c in enumerate(order)}
        # loop through the list
        for x in range(len(words)-1):
            w1, w2 = words[x], words[x+1]
            for i in range(len(w1)):
                if i == len(w2):
                    # word 2 is shorter than word 1
                    # means, word 2 is a prefix of word 1
                    return False
                if w1[i] != w2[i]:
                    # first different char
                    if hmap[w1[i]] > hmap[w2[i]]:
                        # different char and char in word1 comes after
                        # char in word2
                        return False
                    # stop checking both words as we already find the first
                    # difference
                    break
        return True
    # method 2
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        # loop through the list
        for x in range(len(words)-1):
            w1, w2 = words[x], words[x+1]
            for i in range(len(w1)):
                if i == len(w2):
                    # word 2 is shorter than word 1
                    # means, word 2 is a prefix of word 1
                    return False
                if w1[i] != w2[i]:
                    # first different char
                    if order.find(w1[i]) > order.find(w2[i]):
                        # different char and char in word1 comes after
                        # char in word2
                        return False
                    # stop checking both words as we already find the first
                    # difference
                    break
        return True