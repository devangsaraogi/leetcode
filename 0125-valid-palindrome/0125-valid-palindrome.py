class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = "".join(ch for ch in s if ch.isalnum()).lower()

        p1 = 0
        p2 = len(s)-1

        while(p1 < len(s) and p2 >= 0):
            if s[p1] == s[p2]:
                p1+=1
                p2-=1
            else:
                return False

        return True        