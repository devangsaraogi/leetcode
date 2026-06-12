class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        result = ""

        for idx, ch in enumerate(strs[0]):
            for s in strs[1:]:
                if idx == len(s) or s[idx] != ch:
                    return result

            result += ch
        
        return result