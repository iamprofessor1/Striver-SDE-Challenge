int uniquePaths(int m, int n) {
    // Write your code here.
//     vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
//     return ans(m,n,dp);
    int N = n -1 + m-1;
    int r = m-1;
    int res = 1;
    for(int i = 1;i<=r ; i++){
        res = res*(N-i+1)/i;
    }
    return res;
    
}
