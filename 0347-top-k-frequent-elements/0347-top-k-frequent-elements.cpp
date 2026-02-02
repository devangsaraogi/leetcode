class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        vector<vector<int>> bucket(nums.size()+1);
        unordered_map <int, int> umap;

        for (auto &i: nums) umap[i]+=1;

        for (auto &i: umap) bucket[i.second].push_back(i.first);

        for (int i = nums.size(); i >= 0; --i) {
            for (int num : bucket[i]) {
                result.push_back(num);
                k--;
                if (k == 0) return result;
            }
        }

        return {};
    }
};