#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int>us(arr.begin(),arr.end());
    int res = 1;
    for(int i = 0 ; i<n ;i++){
        if(us.find(arr[i]-1)==us.end()){
//             means this is the begining
            int count = 1;
            while(us.find(arr[i]+count)!=us.end()){
                count++;
            }
            res = max(res,count);
        }
    }
    return res;
}
