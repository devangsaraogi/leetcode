class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i]!=0) nums[j++]=nums[i];
        }

        for(; j<nums.size(); ++j) nums[j]=0;
    }

    // void moveZeroes(vector<int>& nums) {
    //     int d=0;
    //     int i=0;
    //     while(d<nums.size()) {
    //         if(nums[i]==0) {
    //             nums.push_back(0);
    //             nums.erase(nums.begin()+i);
    //             d++;
    //         }
    //         else {
    //             d++; i++;
    //         }
    //     }
    // }
};