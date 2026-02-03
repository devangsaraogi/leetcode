class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map <string, int> umap;
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j] == '.') continue;

                char ch = board[i][j];
                
                string key1 = string("r") + to_string(i) + to_string(ch);
                string key2 = string("c") + to_string(j) + to_string(ch);
                string key3 = string("b") + to_string(i/3) + to_string(j/3) + to_string(ch);


                if(umap[key1] or umap[key2] or umap[key3]) return false;

                umap[key1]=1;
                umap[key2]=1;
                umap[key3]=1;
            }
        }

        return true;
    }
};
