class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (auto& row : matrix) {
            int low = 0, high = row.size() - 1;
            if (target > row[high]) continue;

            while (low <= high) {
                int mid = (low + high) / 2;
                if (target > row[mid]) low = mid + 1;
                else if (target < row[mid]) high = mid - 1;
                else return true;
            }
        }

        return false;
    }
};
