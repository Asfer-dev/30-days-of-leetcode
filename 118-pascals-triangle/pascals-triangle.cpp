class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        int rowLen = 1;
        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            for (int j = 0; j < rowLen; j++) {
                if (j != 0 && j != rowLen-1) {
                    row.push_back(tri[i-1][j-1] + tri[i-1][j]);
                } else {
                    row.push_back(1);
                }
            }
            rowLen++;
            tri.push_back(row);
        }
        return tri;
    }
};