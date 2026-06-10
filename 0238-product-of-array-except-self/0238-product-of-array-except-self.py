class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix = [1] * len(nums)
        suffix = [1] * len(nums)
        for i in range(len(nums)):
            if i == 0:
                prefix[i] = 1
            else:
                prefix[i] = nums[i-1] * prefix[i-1]

        for j in range(len(nums)-1, -1, -1):
            if j == len(nums)-1:
                suffix[j] = 1
            else:
                suffix[j] = nums[j+1] * suffix[j+1]

        print(prefix, suffix)

        result = [a*b for a, b in zip(prefix, suffix)]
        return result