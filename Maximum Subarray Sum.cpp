#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum = arr[0] ;
    long long maxEnding = arr[0];
    for(int i = 1 ;i<n ;i++){
        maxEnding = max(arr[i]*1LL , arr[i] + maxEnding);
        sum = max(sum , maxEnding);
    }
    return sum<0 ? 0 : sum;
}
