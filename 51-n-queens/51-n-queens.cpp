class Solution {
public:
    vector<vector<string>> ans;
    bool isvalid(int row, int col, vector<string> &board, int n){
        
        int dubrow=row;
        int dubcol = col;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        row=dubrow;
        col=dubcol;
        
        while(col>=0 && row>=0){
            if(board[row][col]=='Q') return false;   
            col--;
            row--;
        }
        row=dubrow;
        col=dubcol;
        while(col>=0 && row<n){
            if(board[row][col]=='Q') return false;   
            col--;
            row++;
        }
        return true;
              
    }
    void solve(vector<string> &board, int col, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0; row<n; ++row){
            
            if(isvalid(row, col, board, n)){
                board[row][col]='Q';
                solve(board, col+1, n);
                board[row][col]='.';
            }
            
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);   
        string s(n,'.');
        for(int i=0; i<n; ++i){
            board[i]=s;
        }
        solve(board, 0, n);   
        return ans;
        
    }
};