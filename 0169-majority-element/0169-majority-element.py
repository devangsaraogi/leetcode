class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        # moore voting algo
        count=1
        result=nums[0]
        for i in nums[1:]:
            if i == result:
                count+=1
            else:
                if count == 0:
                    result = i
                    count = 1
                else:
                    count-=1
            

        return result




        # track = {}

        # for i in nums:
        #     if track.get(i) == None:
        #         track[i] = 0
            
        #     track[i] += 1

        # sz = len(nums)
        # for k in track.keys():
        #     if track[k] > sz//2:
        #         return k

        # return -1
        