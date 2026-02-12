class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        for(int i = 0; i < numRows; i++){
            pascalTriangle.push_back(vector<int>(i+1));
            for(int j = 0; j <= i; j++){
                if(i == j || j == 0) pascalTriangle[i][j] = 1;
                else pascalTriangle[i][j] = pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j];
            }
        }
        return pascalTriangle;
    }
};