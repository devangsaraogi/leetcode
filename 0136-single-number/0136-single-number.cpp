class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> track;
        for(auto ele: nums) track[ele]++;
        for(auto ele: track) {
            if (ele.second == 1) return ele.first;
        }

        return 0;
    }
};