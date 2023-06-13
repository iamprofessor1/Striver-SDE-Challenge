/*
https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge&leftPanelTab=1
*/

#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &mat)
{
	
    bool row_setter = false;
    int n = mat.size();
    int m = mat[0].size();
    for(int i = 0 ; i < n ;i++){
        if(mat[i][0] == 0)row_setter = 1;
        for(int j= 1; j< m ; j++){
            if(mat[i][j] == 0){
                mat[i][0] = 0 ;
                mat[0][j] = 0;
            }
        }
    }
    for(int i = n-1 ; i>=0 ;i--){
        for(int j = m -1 ; j>= 1 ;j--){
            if(mat[i][0] == 0 or mat[0][j] == 0){
                mat[i][j] =0;
            }
        }
        if(row_setter){
        mat[i][0] = 0 ;
    }
    }
    
    
}
