class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        track = {}
        result = []
        
        for n in nums:
            if track.get(n):
                track[n] += 1
            else:
                track[n] = 1

        top_k = sorted(track.items(), key=lambda x: x[1], reverse=True)
        for i in range(k):
            result.append(top_k[i][0])

        return result