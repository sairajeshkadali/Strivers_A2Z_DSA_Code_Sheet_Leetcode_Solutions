class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++){
            if(grid[i][0] == 0){
                for(int j = 0; j < n; j++)  grid[i][j] = !grid[i][j];
            }
        }
        int zeroes = 0, ones = 0;
        for(int j = 0; j < n; j++){
            zeroes = 0, ones = 0;
            for(int i = 0; i < m; i++){
                if(grid[i][j]) ones++;
                else zeroes++;
            }
            if(zeroes > ones){
                for(int i = 0; i < m; i++)  grid[i][j] = !grid[i][j];
            }
        }

        int sum = 0, pow_2 = 1, num;
        for(int i = 0; i < m; i++){
            num = 0;
            pow_2 = 1;
            for(int j = n - 1; j >= 0; j--){
                num += grid[i][j] * pow_2;
                pow_2 *= 2;
            }
            sum += num;
        }
        return sum;
    }
};