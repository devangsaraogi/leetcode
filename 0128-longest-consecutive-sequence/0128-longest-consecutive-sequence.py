class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not len(nums):
            return 0

        def checkSeq(numSet: set, n: int) -> int:
            nSeq = 1
            while n+1 in numSet:
                nSeq += 1
                n = n+1
            else:
                return nSeq

        numSet = set(nums)
        maxSeq = 1

        for n in numSet:
            if n-1 in numSet:
                continue
            else:
                maxSeq = max(checkSeq(numSet, n), maxSeq)

        return maxSeq