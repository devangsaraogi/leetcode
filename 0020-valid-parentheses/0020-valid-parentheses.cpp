class Solution {
public:
    bool isValid(string s) {
        unordered_map <char, char> dict;
        
        dict['}'] = '{';
        dict[']'] = '[';
        dict[')'] = '(';

        stack<char> stack;

        for(auto ch: s){
            if (!stack.empty() && stack.top()==dict[ch]){
                stack.pop();
            }
            else{
                stack.push(ch);
            }
        }

        return stack.empty();
    }
};