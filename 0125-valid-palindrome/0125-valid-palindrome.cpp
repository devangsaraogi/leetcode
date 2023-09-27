class Solution {
public:
    bool checkPal(string &s, int i){
        int n=s.size();
        if(i>=n/2) return true;

        //check
        if(s[i] != s[n-i-1]) return false;
        return checkPal(s, i+1);
    }

    bool isPalindrome(string s) {
        string x = "";
        for(auto ch: s){
            if (isalnum(ch)) x+=ch;
            else continue;
        }
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        return checkPal(x, 0);
    }
};

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         bool flag = true;

//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//         // for(auto ch: s){
//         //     if (int(ch)>=97 && int(ch)<=122) continue;
//         //     else s.erase(remove(s.begin(), s.end(), ch), s.end());
//         // }

//         // int head = 0;
//         // int tail = s.size()-1;
//         // while (head <= tail) {
//         //     if (!(s[head] == s[tail])) flag = false;
//         //     else {
//         //         head+=1;
//         //         tail-=1;
//         //     }
//         // }
//         // return flag;

//         int head = 0;
//         int tail = s.size()-1;
//         while (head <= tail) {
//             if (!(isalnum(s[head]))) head+=1;
//             else if (!(isalnum(s[tail]))) tail-=1;

//             else if (!(s[head] == s[tail])) flag = false;
//             else {
//                 head+=1;
//                 tail-=1;
//             }
//         }
//         return flag;
        
//     }
// };