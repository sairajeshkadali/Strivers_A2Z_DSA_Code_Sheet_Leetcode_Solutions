class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(), cols = matrix[0].size();
        int i = 0, j = cols - 1;
        while(0 <= i && i < rows && 0 <= j && j < cols){
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;
    }
};