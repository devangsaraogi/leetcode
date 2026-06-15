class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        res = ""
        itr = min(len(word1), len(word2))
        i=0
        while i < itr:
            res += word1[i] + word2[i]
            i+=1

        if word1[itr:]:
            res += word1[itr:]
        
        if word2[itr:]:
            res += word2[itr:]
        
        return res         