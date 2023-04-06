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

//2nd solution


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col[m] = {0} ;
        int row[n] = {0} ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 0 ){
                    row[i] =1;
                    col[j] =1;
                    
                } 
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if (row[i] ==0 || col[j] == 0){
                    matrix[i][j]=0;
                }
            }
        }

        
    }
};

"have some error because of the dynamic location please provide me a solution if you can"
    
  
