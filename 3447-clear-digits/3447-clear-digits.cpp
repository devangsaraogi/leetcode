class Solution {
public:
    string clearDigits(string s) {
        vector<char> letters;
        string result;
        for (auto c: s) {
            if(!isdigit(c)){
                letters.push_back(c);
            }

            if (isdigit(c)) {
                letters.pop_back();
            }
        }

        for (auto c: letters) {
            result += c;
        }

        return result;
    }
};