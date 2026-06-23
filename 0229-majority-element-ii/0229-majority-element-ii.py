class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        f = len(nums) // 3

        store = {}
        result = []

        for i in nums:
            if store.get(i):
                store[i] += 1
            else:
                store[i] = 1   

        for key in store.keys():
            if store[key] > f:
                result.append(key)

        return result        