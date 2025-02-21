class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> track;
        vector<int> result;

        for(auto num:nums) track[num]++;

        for(auto key:track) {
            if(key.second == 2) result.push_back(key.first);
        }

        return result;
    }
};