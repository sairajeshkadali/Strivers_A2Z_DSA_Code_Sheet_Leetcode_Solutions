class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minr = 0, maxc = n - 1, maxr = n - 1, minc = 0, count = 1,
            total = n * n;
        vector<vector<int>> matrix(n, vector<int>(n));
        while (minr <= maxr && minc <= maxc) {
            for (int i = minc; i <= maxc && count <= total; i++) {
                matrix[minr][i] = count;
                count++;
            }
            ++minr;
            for (int j = minr; j <= maxr && count <= total; j++) {
                matrix[j][maxc] = count;
                count++;
            }
            --maxc;
            for (int k = maxc; k >= minc && count <= total; k--) {
                matrix[maxr][k] = count;
                count++;
            }
            --maxr;
            for (int l = maxr; l >= minr && count <= total; l--) {
                matrix[l][minc] = count;
                count++;
            }
            ++minc;
        }
        return matrix;
    }
};