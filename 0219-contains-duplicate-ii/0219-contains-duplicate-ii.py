class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        store = {}

        for idx, num in enumerate(nums):
            if store.get(num) is None:
                store[num] = idx
            else:
                if abs(store[num]-idx) <= k: return True
                store[num] = idx

        return False

        