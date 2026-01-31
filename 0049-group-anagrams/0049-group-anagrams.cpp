class Solution {
public:
    string generateFingerPrint(string s) {
        // initialize counter array
        int arr[26] = {0};

        // initialize fingerprint string
        string sFinger;

        for(auto &ch: s) arr[ch - 'a']++;
        for(int i=0; i<26; i++) {
            if (arr[i]) sFinger += char('a'+ i) + to_string(arr[i]);
        } 
        return sFinger;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // hashtable
        unordered_map<string, vector<string>> umap;

        vector<vector<string>> result;

        for (int i=0; i<strs.size(); i++) {
            // call helper function 
            string sFinger = generateFingerPrint(strs[i]);

            // insert into hashtable
            umap[sFinger].push_back(strs[i]);
        }

        for (auto &k : umap) result.push_back(k.second);

        return result;
    }
};