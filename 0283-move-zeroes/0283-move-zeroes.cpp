class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int d=0;
        int i=0;
        while(d<nums.size()) {
            if(nums[i]==0) {
                nums.push_back(0);
                nums.erase(nums.begin()+i);
                d++;
            }
            else {
                d++; i++;
            }
        }
    }
};