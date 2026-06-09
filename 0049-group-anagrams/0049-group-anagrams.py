class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dir = {}
        
        def dna(s: str) -> str:
            key = ""
            dir = [0] * 26
            for ch in s:
                dir[ord(ch)-ord("a")] += 1

            for idx, count in enumerate(dir):
                if count: 
                    key += chr(idx)+str(count)

            return key

        for s in strs:
            k = dna(s)
            if dir.get(k):
                dir[k].append(s)
            else:
                dir[k] = [s]


        return list(dir.values())