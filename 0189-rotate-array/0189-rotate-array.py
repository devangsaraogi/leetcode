class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        def reverse(l: int, r: int) -> None:
            while (l<r):
                temp = nums[l]
                nums[l] = nums[r]
                nums[r] = temp

                l+=1
                r-=1

        sz = len(nums)
        k = k % sz

        reverse(0, sz-1)
        reverse(0, k-1)
        reverse(k, sz-1)
