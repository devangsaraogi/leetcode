class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1 = 0;
        int prev2 = 0;

        for(int h: nums) {
            int curr = max(prev1, h+prev2);

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};