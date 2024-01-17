#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<string>>result;
    bool CanPlace(vector<string>&board,int row,int col){
        //Check 1:we will check current col
        for(int i=row;i>=0;i--){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //Check 2: left diagonal
        for(int i=row,j=col;i>=0 and j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }

        }
        //Check 3: right diagonal
        for(int i=row,j=col;i>=0 and j<board.size();i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }

        }
        return true;

    }
    void N_Queen(vector<string>&board,int row){
        if(row==board.size()){
            result.push_back(board);
            return;
        }
        //We will move to every Viable position
        for(int j=0;j<board.size();j++){
            if(CanPlace(board,row,j)==1){
                //Put the Queen
                board[row][j]='Q';
                N_Queen(board,row+1);
                //Backtracking
                board[row][j]=='.';
                
            }
        }
        

    }
    vector<vector<string>> solveNQueens(int n){
        if(n<=0){
            return {{}};
        }
        if(n==1){
            return {{"Q"}};
        }
        vector<string>board(n,string(n,'.'));
        N_Queen(board,0);
        return result;

               
    }
};