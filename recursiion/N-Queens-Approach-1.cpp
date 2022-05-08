#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isSafe(int row, int col,vector<string>board, int n){
     
        //Upper Diagonal Check
        int rowCpy = row;
        int colCpy = col;
        
        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        
        row = rowCpy;
        col = colCpy;
       

        //side
        while(col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
        }
        
        
        row = rowCpy;
        col = colCpy;
        
         //Down Diagonal
        while(row<n && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }
        
        return true;
    }
    void solve(int col, vector<string>&board, vector<vector<string>>&res, int n){

        
        if(col==n){
            res.push_back(board);
            return;
        }
        
        for(int row = 0; row<n; row++){
            
            if(isSafe(row,col,board,n)){
                board[row][col] = 'Q';
            
                solve(col+1, board, res, n);
            
                board[row][col] = '.';
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
        
        solve(0, board, res, n);
        return res;
        
    }
};