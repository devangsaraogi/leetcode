class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        
        int max_count = 0; 
        int count = 0;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i+1] == nums[i]) continue;
            if(nums[i+1]-nums[i] == 1) {
                count+=1;
                max_count = max(max_count, count);
                continue;
            }

            max_count = max(max_count, count);
            count = 0;
        }

        return max_count+1;
    }
};
