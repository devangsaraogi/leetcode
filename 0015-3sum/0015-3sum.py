class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        result = []

        for idx, i in enumerate(nums):
            if idx > 0 and i == nums[idx-1]:
                continue

            l = idx+1
            r = len(nums)-1

            sum = -i
            
            while (l < r):
                curr_sum = nums[l] + nums[r]
                if curr_sum > sum:
                    r-=1
                elif curr_sum < sum:
                    l+=1
                else:
                    result.append([i, nums[l], nums[r]])
                    r-=1
                    l+=1

                    while l < r and nums[l] == nums[l - 1]:
                        l += 1
                    
                    while l < r and r < len(nums)-1 and nums[r] == nums[r + 1]:
                        r -= 1

        return result
        