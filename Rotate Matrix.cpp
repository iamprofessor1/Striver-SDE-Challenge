#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int startRow = 0 , startCol = 0 ;
    int endRow = n-1 , endCol = m-1;
    int prev , curr ;
    while(startRow< endRow and startCol<endCol){
        if(startRow + 1 == n || startCol + 1 == m ){
            return ;
        }

        prev =mat[startRow+1][startCol];
        for(int j = startCol ; j<= endCol ;j++){
            curr = mat[startRow][j];
            mat[startRow][j] = prev;
            prev = curr;
        }
        startRow++;
        for(int i = startRow ; i<=endRow ; i++ ){
             curr = mat[i][endCol];
            mat[i][endCol] = prev;
            prev = curr;
        }
        endCol--;
        if(startRow<= endCol){
            for(int j = endCol ; j>= startCol ;j--){
                 curr = mat[endRow][j];
                mat[endRow][j] = prev;
                prev = curr;
            }
            endRow--;
        }
        if(startCol<=endCol){
            for(int i = endRow ; i>=startRow ; i--){
                 curr = mat[i][startCol];
            mat[i][startCol] = prev;
            prev = curr;
            }
            startCol++;
            
        }
        
        
    }
    

}
