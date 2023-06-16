#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    unordered_map<int,int> us ;
    vector<vector<int>>ans;
    for(int i = 0 ; i<arr.size() ;i++){
        if(us.find(s- arr[i]) != us.end()){
            
            vector<int>t{min(arr[i],s- arr[i]), max(arr[i],s- arr[i])};
            int count = us[s- arr[i]];
            while(count--){
            ans.push_back(t);
            }
        }
        us[(arr[i])] +=1 ;
    }
    sort(ans.begin(),ans.end());
    return ans;
}Pair Sum
