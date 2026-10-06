class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for (char c : s) {
            if (isalnum(c)) {
                s2.push_back(tolower(c));
            }
        }
        string temp = s2;
        reverse(s2.begin(), s2.end());

        if (temp == s2) return true;
        return false;
    }
};
