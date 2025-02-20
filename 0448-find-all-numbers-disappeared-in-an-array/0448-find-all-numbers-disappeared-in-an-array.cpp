class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // declare map
        // add elements of vector to map as key and put value 1
        // iterate through map to push out values which don't have anything assigned

        vector<int> result;
        map<int, int> track;

        for(int i=1; i<=nums.size(); i++) track[i] = 0;
        for(auto num:nums) {
            track[num] = 1;
        }

        for(auto key:track) {
            if(key.second == 0) result.push_back(key.first);
        }

        return result;
    }
};