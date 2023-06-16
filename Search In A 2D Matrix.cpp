#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int low = 0 ;
    int high = n*m -1;
    while(low<= high){
        int mid = low + (high - low)/2;
        int element = mat[mid/n][mid%n];
        if(element == target){
            return true;
        }
        else if(element >target){
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return 0;
}
