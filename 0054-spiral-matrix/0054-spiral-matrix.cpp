class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int minr = 0, maxc = n - 1, maxr = m - 1, minc = 0, count = 0,
            total = m * n;
        vector<int> sol;
        while (minr <= maxr && minc <= maxc) {
            for (int i = minc; i <= maxc && count < total; i++) {
                sol.emplace_back(matrix[minr][i]);
                count++;
            }
            ++minr;
            for (int j = minr; j <= maxr && count < total; j++) {
                sol.emplace_back(matrix[j][maxc]);
                count++;
            }
            --maxc;
            for (int k = maxc; k >= minc && count < total; k--) {
                sol.emplace_back(matrix[maxr][k]);
                count++;
            }
            --maxr;
            for (int l = maxr; l >= minr && count < total; l--) {
                sol.emplace_back(matrix[l][minc]);
                count++;
            }
            ++minc;
        }
        return sol;
    }
};