class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        track = {}

        for i in nums:
            if track.get(i) == None:
                track[i] = 0
            
            track[i] += 1

        sz = len(nums)
        for k in track.keys():
            if track[k] > sz//2:
                return k

        return -1
        