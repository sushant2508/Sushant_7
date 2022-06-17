class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) { 
        
        int row = matrix.size();
        int col = matrix[0].size();
        vector<long long int> r(row, INT_MAX);
        vector<long long int> c(col, INT_MAX);
        
        for(int i=0; i<matrix.size(); ++i){
            for( int j=0; j<matrix[0].size(); ++j){
                if(matrix[i][j]==0){
                    r[i] = 0;
                    c[j] = 0;
                }
            }
        }
        for(int i=0; i<matrix.size(); ++i){
            for( int j=0; j<matrix[0].size(); ++j){ 
                if(r[i]==0){
                    matrix[i][j]=0;
                }
                if(c[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
        
        
};