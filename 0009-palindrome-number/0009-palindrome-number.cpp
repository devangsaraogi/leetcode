class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else{
            int num = x;
            long rev = 0;
            while(x){
                rev = rev*10 + x%10;
                x/=10;
            }

            return(rev==num);
        }
    }
};