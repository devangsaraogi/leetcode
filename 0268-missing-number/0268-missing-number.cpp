class Solution {
public:
    // simple approach
    int missingNumber(vector<int>& nums) {
        int check_sum = (nums.size() * (nums.size()+1)) / 2;
        
        int sum = 0;
        for(auto ele: nums) sum += ele;
        return check_sum - sum;
    }
};