class Solution {
public:
    bool checkSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n-1; ++i) {
            if(nums[i] > nums[i+1]) return false;
        }
        return true;
    }

    vector<int> rotateArray(vector<int> &nums, int mod) {
        int size = nums.size();
        vector<int> result(size, 0);
        for(int i=0; i<size; ++i) result[(i+mod) % size] = nums[i];
        return result;
    }

    bool check(vector<int>& nums) {
        int size = nums.size();
        bool flag = false;
        for(int i=0; i<size; i++) {
            vector<int> y = rotateArray(nums, i);
            flag = checkSort(y);
            if (flag) return flag;
        }
        
        return flag;
    }
};