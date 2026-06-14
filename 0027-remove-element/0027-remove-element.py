class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """

        p1 = 0
        p2 = len(nums)-1

        k = 0

        while(p1<=p2):
            if nums[p2] == val:
                k+=1
                p2-=1
                continue

            if nums[p1] == val:
                nums[p1] = nums[p2]
                nums[p2] = "_"
                p2-=1
                k+=1

            p1+=1

        return len(nums)-k
        