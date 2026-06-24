class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        store = {}
        r = False

        for idx, num in enumerate(nums):
            if store.get(num) is None:
                store[num] = [idx]
            else:
                store[num].append(idx)


        for key in store.keys():
            if len(store[key]) > 1:
                for idx in range(1, len(store[key])):
                    if abs(store[key][idx-1]-store[key][idx]) <= k:
                        return True
                    else:
                        r = False
            else:
                r = False

        return r

        