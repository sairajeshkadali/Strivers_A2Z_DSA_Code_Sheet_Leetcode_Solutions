class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector <int> zeroCols, zeroRows;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    zeroCols.emplace_back(j);
                    zeroRows.emplace_back(i);
                }
            }
        }
        
        for (int row : zeroRows)
        {
            for (int i = 0; i < n; i++)
            {
                matrix[row][i] = 0;
            }
            
        }
        
    
        for (int col : zeroCols)
        {
            for (int i = 0; i < m; i++)
            {
                matrix[i][col] = 0;            
            }
            
        }
    }
};