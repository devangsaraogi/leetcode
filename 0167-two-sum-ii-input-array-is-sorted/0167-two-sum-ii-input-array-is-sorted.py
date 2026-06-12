class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        track = {}

        for idx, num in enumerate(numbers):
            comp = target-num

            if comp in track:
                return sorted([track[comp]+1, idx+1])

            track[num] = idx

        return []