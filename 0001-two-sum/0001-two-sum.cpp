class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (um.find(x) != um.end()) return {um[x], i};
            um[nums[i]] = i;
        }

        return {0, 0};
    }
};