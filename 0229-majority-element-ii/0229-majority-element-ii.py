class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        if not nums:
            return []

        count1 = count2 = 0
        candidate1 = candidate2 = None

        for i in nums:
            if i == candidate1:
                count1+=1
            elif i == candidate2:
                count2+=1
            elif count1 == 0:
                candidate1 = i
                count1 = 1
            elif count2 == 0:
                candidate2 = i
                count2 = 1
            else:
                count1-=1
                count2-=1
            
        result = []
        count = len(nums)//3

        act_count1 = nums.count(candidate1)
        act_count2 = nums.count(candidate2)

        if act_count1 > count:
            result.append(candidate1)
        if candidate1 != candidate2 and act_count2 > count:
            result.append(candidate2)
        
        return result