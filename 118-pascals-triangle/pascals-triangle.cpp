class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        for (int i = 0; i < numRows; i++)
            tri.push_back(vector<int>(i + 1, 1));
        
        for (int i = 2; i < numRows; i++) {
            for (int j = 1; j < tri[i].size() - 1; j++) {
                tri[i][j] = (tri[i-1][j-1] + tri[i-1][j]);
            }
        }
        return tri;
    }
};