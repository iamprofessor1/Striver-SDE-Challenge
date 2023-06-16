#include <bits/stdc++.h> 

int merge(vector<int>&v , int l ,int m,int h){
    int i = l ;
    int n1 = m - l+1;
    int j = m+1;
    int count = 0;
    while(i<= m){
        while(j<= h and v[i]>2*v[j]){
            j++;
        }
        count += (j-(m+1));
        i++;
    }
   
    sort(v.begin()+l , v.begin()+h+1);
     return count;
}

int count(vector<int>& arr , int l , int h ){
    int res = 0;
    if(l<h){
        int m = l +(h-l)/2;
        res += count(arr,l,m);
        res+=count(arr,m+1 , h);
        res+=merge(arr,l,m,h);
    }
    return res;
}

int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
  
    return count(arr, 0 , n-1);
}
