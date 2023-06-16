#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i<=arr.size()-4;i++){
        for(int j = i+1 ; j<=arr.size()-3;j++){
            int s =j+1;
            int e = arr.size()-1;
            while(s<e){
                int sum = arr[s]+arr[e]+arr[i]+arr[j];
                if(sum == target){
                    return "Yes";
                }
                else if(sum>target){
                    e--;
                }
                else{
                    s++;
                }
            }
        }
    }
    return "No";
}
