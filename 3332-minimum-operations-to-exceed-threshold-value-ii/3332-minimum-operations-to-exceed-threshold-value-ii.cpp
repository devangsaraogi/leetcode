class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        priority_queue<long long int, vector<long long int>, greater<long long int>> queue;

        for (auto num:nums) {
            queue.push(num);
        }

        while(queue.size()>1&& !(queue.top()>=k)) {
            count += 1;

            long long int x = queue.top();
            queue.pop();
            long long int y = queue.top();
            queue.pop();

            long long ele = x*2 + y;
            queue.push(ele);
        }

        return count;
    }
};

    // int minOperations(vector<int>& nums, int k) {
    //     int count = 0;
    //     while(nums.size()>=2 && !(nums[0]>=k)) {
    //         sort(nums.begin(),nums.end());

    //         count+=1;
    //         int x = nums[0]; 
    //         int y = nums[1];

    //         nums.erase(nums.begin());
    //         nums.erase(nums.begin());

    //         long long int ele = (static_cast<long long int>(min(x, y)) * 2 + max(x, y));
    //         cout<<ele<<endl;
    //         nums.push_back(ele);
    //     }

    //     return count;
    // }