class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        track = {}

        for idx, n in enumerate(nums):
            comp = target - n

            if comp in track:
                return [track[comp], idx]
            
            track[n] = idx

        return []