class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = -1; int count=0;
        for(int i=0; i<nums.size(); i++) {
            if (nums[i] == 0) {
                mx = max(mx, count);
                count = 0;
            }
            else count++;
        }
        return max(mx, count);
    }
};