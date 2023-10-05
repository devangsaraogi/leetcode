class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //simple approach
        int n = nums.size();
        int check_sum = (n * (n+1)) / 2;
        int sum = 0;

        for(auto ele: nums) sum += ele;

        return check_sum - sum;
    }
};