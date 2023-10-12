class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return n;

        int i=0;
        for(int j=1; j<n; j++) {
            if(nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i+1;
    }
};

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         // 0,0,1,1,1,2,2,3,3,4
//         // 0,2,5,7,9
        

//         // 1,1
//         // 

//         if(nums.size() == 1) return 1;

//         vector<int> idx;
//         int j=0; int i=0; int n=nums.size();
//         bool flag=true;
//         while(flag) {
//             if (nums[i]==nums[j] && j<n) {
//                 j++;
//             }
//             else if(nums[i]!=nums[j]) {
//                 idx.emplace_back(i);
//                 i=j;
//             }
//             else {
//                 flag=false;
//                 // idx.emplace_back(i);
//             }
//         }
     
//         n = idx.size();
//         for(int i=0; i<n; i++){
//             nums[i] = nums[idx[i]];
//         }

//         return idx.size();
//     }
// };