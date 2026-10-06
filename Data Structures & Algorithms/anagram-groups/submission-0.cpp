class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (string& str: strs) {
            string temp = str;
            sort(str.begin(), str.end());

            groups[str].push_back(temp);
        }

        vector<vector<string>> result;
        for (auto& vec: groups) {
            result.push_back(vec.second);
        }

        return result;
    }
};
