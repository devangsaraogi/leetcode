class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        store = {}
        maxWindow = 0
        start = 0

        for end, c in enumerate(s):
            if c in store:
                start = max(start, store[c] + 1)
            
            store[c] = end
            maxWindow = max(maxWindow, end - start + 1)
            
        return maxWindow