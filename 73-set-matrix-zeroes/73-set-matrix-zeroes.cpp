class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) { 
        int row = matrix.size();
        int col = matrix[0].size();
        vector<long long int> rows(row,INT_MAX);
        vector<long long int> cols(col,INT_MAX);
            for(int i=0; i<row; ++i){     
            for(int j=0; j<col; ++j){     
                if(matrix[i][j]==0){
                    rows[i]=0;
                    cols[j]=0;
                }
            }
        }
        for(int i=0; i<row; ++i){
            for(int j=0; j<col; ++j){
               if(rows[i]==0 || cols[j]==0 ){
                   matrix[i][j]=0;
               }  
            }
        }        
    }
};