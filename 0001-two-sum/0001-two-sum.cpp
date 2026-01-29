class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        for(int i=0; i<nums.size(); i++) {
            um[nums[i]] = i;
        }

        int x;
        for(int i=0; i<nums.size(); i++) {
            x = target - nums[i];
            if (um.find(x) != um.end() and i!= um[x]) return {i, um[x]};
        }

        return {0, 0};
    }
};