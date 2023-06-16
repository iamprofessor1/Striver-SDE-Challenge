#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int xor_ans = 0;
    for(int i = 0 ; i<n ;i++){
        xor_ans = xor_ans^(i+1);
        xor_ans = xor_ans^(arr[i]);
    }
//     find rightmost set bits
//     cout<<xor_ans<<" ";
    int sn = xor_ans&(~(xor_ans- 1));
//     cout<<sn<<" ";
    int x  = 0 ;
    int y = 0 ;
    for(int i = 0 ; i<n ;i++){
        if((sn&arr[i])!=0){
            x = x^arr[i];
        }
        else{
             y = y^arr[i];
        }
        if((sn&(i+1))!=0){
            x = x^(i+1);
        }
        else{
            y = y^(i+1);
        }
    }
    for(int i = 0 ; i<n ;i++){
        if(arr[i]== x){
            return {y,x};
        }
        else if(arr[i] ==y){
            return {x,y};
        }
    }
    
}
