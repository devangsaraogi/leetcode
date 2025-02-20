class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> track(nums.size()+1);
        vector<int> result;

        for(auto num:nums) track[num] = true;
        for(int i=1; i<=nums.size(); i++) {
            if(!track[i]) result.push_back(i);
        }

        return result;
    }
};