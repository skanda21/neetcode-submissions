class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int n = s.size();
        int maxLength = 0;
        unordered_set<char> st;

        while (r < n) {
            while (st.find(s[r]) != st.end()) {
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);

            maxLength = max(maxLength, r - l + 1);

            r++;
        }

        return maxLength;
    }
};
