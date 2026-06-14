class Solution:
    def validPalindrome(self, s: str) -> bool:    
        def helper(s: str, l: int, r: int) -> bool:
            while(l<r):
                if s[l] != s[r]:
                    return False
                l+=1
                r-=1
            return True
            
        pl = 0
        pr = len(s)-1

        while pl < pr:
            if s[pl] == s[pr]:
                pl += 1
                pr -= 1
            else:
                return (helper(s, pl+1, pr) or helper(s, pl, pr-1))

        return True
