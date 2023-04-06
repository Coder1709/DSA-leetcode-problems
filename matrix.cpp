https://leetcode.com/problems/set-matrix-zeroes/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> str;
        vector<int> row(2);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    row[0] = i;
                    row[1] = j;
                    str.push_back(row);
                }
            }
        }
        for(int i = 0 ; i < str.size() ; i++){
            int r = str[i][0];
            int c = str[i][1];
            for(int j = 0 ; j < n; j++){
                matrix[j][c] = 0;
            }
            for(int j = 0 ; j < m ; j++ ){
                matrix[r][j] = 0;
            }
        }
    }
};
