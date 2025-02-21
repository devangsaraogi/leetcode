class Solution {
public:
    vector<string> genString(int n) {
        vector<string> result;
        if(n == 0) {
            result.push_back("");
            return result;
        }

        vector<string> strings = genString(n-1);
        for(auto string:strings) {
            result.push_back(string + "0");
            result.push_back(string + "1");
        }

        return result;
    }

    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].size();
        vector<string> allStrings = genString(n);
        map<string, bool> track;

        for(auto s: nums) track[s] = true;
        for(auto s: allStrings) {
            if(!track[s]) return s;
        }

        return "0";
    }
};