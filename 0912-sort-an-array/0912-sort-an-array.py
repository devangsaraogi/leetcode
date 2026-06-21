class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        sz = len(nums)

        if sz <= 1:
            return nums

        cut = sz // 2
        leftArr = self.sortArray(nums[:cut])
        rightArr = self.sortArray(nums[cut:])

        return self.mergeArr(leftArr, rightArr)

    def mergeArr(self, leftArr: List[int], rightArr: List[int]) -> List[int]:
        sortArr = []
        i = j = 0

        while (i < len(leftArr) and j < len(rightArr)):
            if leftArr[i] <= rightArr[j]:
                sortArr.append(leftArr[i])
                i+=1
            else:
                sortArr.append(rightArr[j])
                j+=1

        sortArr.extend(leftArr[i:])
        sortArr.extend(rightArr[j:])
        
        return sortArr
