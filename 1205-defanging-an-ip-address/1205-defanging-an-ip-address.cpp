class Solution {
public:
    string defangIPaddr(string address) {
        string mod_address;
        for (char c : address) {
            if (c=='.') mod_address += "[.]";
            else mod_address += c;
        }

        return mod_address;
    }
};