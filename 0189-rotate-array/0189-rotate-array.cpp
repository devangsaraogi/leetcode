class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int d = nums.size()-k;
        for(int i=0; i<d; i++) {
            nums.push_back(nums[i]);
        }

        nums.erase(nums.begin(), nums.begin()+d);
    }
};