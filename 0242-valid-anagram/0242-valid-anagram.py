class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        track = [ch for ch in s]
        for ch in t:
            try:
                track.remove(ch)
            except:
                return False

        return not bool(len(track))