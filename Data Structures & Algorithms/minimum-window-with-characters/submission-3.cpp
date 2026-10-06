class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty()) return "";

        int have = 0, need = t.size();
        unordered_map<char, int> countT, window;

        int l = 0, start = 0;

        int resLen = INT_MAX;

        for (char c: t) {
            countT[c]++;
        }
        for (int r = 0; r < s.size(); r++) {
            char c = s[r];

            window[c]++;
            if (countT.count(c) && window[c] <= countT[c]) {
                have++;
            }

            while (have == need) {
                if (r - l + 1 < resLen) {
                    resLen = r - l + 1;
                    start = l;
                }

                window[s[l]]--;

                if (countT.count(s[l]) && window[s[l]] < countT[s[l]]) {
                    have--;
                }

                l++;
            }

        }
        return resLen == INT_MAX ? "" : s.substr(start, resLen);
    }
};
