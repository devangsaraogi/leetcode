class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 0;
        for (int x: nums) n = max(n,x);

        vector<int> sums(n+1, 0);
        for (int x: nums) sums[x]+=x;

        int prev1 = 0;
        int prev2 = 0;
        for (int i=1; i<=n; i++) {
            int curr = max(prev1, sums[i]+prev2);

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};