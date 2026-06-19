class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights)-1
        maxW = 0

        while l < r:
            W = min(heights[l], heights[r])*(r-l)
            maxW = max(W, maxW)

            if heights[l] < heights[r]:
                l += 1
            else:
                r -= 1

        return maxW