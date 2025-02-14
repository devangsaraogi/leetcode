class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size()==1) return nums[0];

        int sum = nums[0];
        int res = 0;
        for(int i=1; i<nums.size(); i++) {
            if (nums[i] > nums[i-1]) {
                cout<<nums[i]<<endl;
                sum += nums[i];
            }
            else {
                res = max(res, sum);
                sum = nums[i];
            }
        }

        return max(res, sum);
    }
};