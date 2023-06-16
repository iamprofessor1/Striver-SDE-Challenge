#include <bits/stdc++.h> 

long long countAndMerge(long long * arr , int l ,int m ,int r){
    int n1 = m- l +1;
    int n2 = r -m;
    int a1[n1];
    int a2[n2];
    for(int i = 0 ;i<n1 ;i++){
        a1[i] = arr[i+l];
    }
    for(int j = 0 ; j<n2 ;j++){
        a2[j] = arr[m+1+j];
    }
    long long res = 0 ;
    int i = 0 , j = 0 , k =l;
    while(i<=n1-1 and j<= n2 -1){
        if(a1[i]<=a2[j]){
            arr[k] = a1[i];
            i++;
            k++;
        }
        else{
            arr[k] = a2[j];
            res+=(n1 - i);
            k++;
            j++;
        }
    }
    while(i<=n1-1){
         arr[k] = a1[i];
            i++;
            k++;
    }
    while(j<=n2-1){
                    arr[k] = a2[j];
            res+=(n1 - i);
            k++;
            j++;
    }
    return res;
}

long long countInv(long long *arr , int l  , int r){
    long long res = 0;
    if(l<r){
        int m = l +(r-l)/2;
        res += countInv(arr,l,m);
        res+=countInv(arr,m+1,r);
        res +=countAndMerge(arr,l,m,r);
    }
    return res;
}


long long getInversions(long long *arr, int n){
    // Write your code here.
    int l = 0 , r = n-1;
    return countInv(arr,0,n-1);
}
