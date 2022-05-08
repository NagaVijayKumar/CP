#include<bits/stdc++.h>
using namespace std;


void solve(int col, vector<string>&board, vector<vector<string>>&res, vector<int>&leftRow, 
            vector<int>&upperDiagonal, vector<int>&lowerDiagonal,int n){
    
    if(col==n){
        res.push_back(board);
    }
    
    for(int row=0; row<n; row++){
        
        //to check is safe to place queen
        if(leftRow[row]==0 && upperDiagonal[n-1 + col-row]==0 && lowerDiagonal[row+col]==0){
            
            leftRow[row] = 1;
            upperDiagonal[n-1 + col-row] = 1;
            lowerDiagonal[row+col] = 1;
            
            board[row][col] = 'Q';
            
            
            solve(col+1, board, res, leftRow, upperDiagonal, lowerDiagonal,n);
            
            //BackTracking
            board[row][col] =  '.';
            leftRow[row] = 0;
            upperDiagonal[n-1 + col-row] = 0;
            lowerDiagonal[row+col] = 0;
        
        }
    }
    
}

vector<vector<string>> solveNQueens(int n) {
    
    vector<vector<string>>res;
    
    string s(n,'.');
    vector<string>board(n);
    
    for(int i=0; i<n; i++){
        board[i] = s;
    }
    
    vector<int>leftRow(n, 0);
    vector<int>upperDiagonal(2*n - 1, 0);
    vector<int>lowerDiagonal(2*n -1, 0);
    
    solve(0, board, res, leftRow, upperDiagonal, lowerDiagonal,n);
    
    return res;
    
}
