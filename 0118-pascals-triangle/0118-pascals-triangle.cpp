class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;
        for (int row = 0; row < numRows; row++) {
            vector<int> tempSol;
            int ele = 1;
            tempSol.emplace_back(ele);
            for (int col = 0; col < row; col++) {
                ele *= (row - col);
                ele /= (col+1);
                tempSol.emplace_back(ele);
            }
            sol.push_back(tempSol);
        }
        return sol;
    }
};