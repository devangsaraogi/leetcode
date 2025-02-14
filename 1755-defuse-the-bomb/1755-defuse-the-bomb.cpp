class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> df;
        int sz = code.size();
    
        for(int i=0; i<sz; i++) {
            code.push_back(code[i]);
            int sum = 0;
            if(k>=0) {
                for (int j=i+1; j<=i+k; j++) {
                    sum += code[j];
                }
                df.push_back(sum);
            } else {
                for(int j=i+sz-1; j>i+sz-1+k; j--) {
                    sum += code[j];
                }
                df.push_back(sum);
            }
        }


        return df;
    }
};