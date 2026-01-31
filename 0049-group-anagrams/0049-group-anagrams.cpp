class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // hash table
        unordered_map <string, vector<string>> hmap;

        vector<vector<string>> result;

        // create a copy of input vector
        vector<string> strscpy = strs;

        // sorting each element in copy vector
        for(int i=0; i<strscpy.size(); i++) {
            sort(strscpy[i].begin(), strscpy[i].end());
            hmap[strscpy[i]].push_back(strs[i]);
        }

        // using hash table to get back the final output
        for (auto k: hmap) result.push_back(k.second);

        return result;
    }
};