#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int , int>ump;
    int k = 3;
    vector<int>ans;
    int n = arr.size();
    for(int i = 0 ;i<arr.size();i++){
        if(ump.find(arr[i]) != ump.end()){
            ump[arr[i]]++;
        }
        else{
            if(ump.size()<k-1){
                ump.insert({arr[i],1});
            }
            else{
                for(auto it = ump.begin(); it!=ump.end();){
                    it->second--;
                    if(it->second == 0){
                        it = ump.erase(it);
                    }
                    else{
                        it++;
                    }
                }
            }
        }
    }
    for(auto x : ump){
        int count = 0;
        for(int i = 0 ;i<arr.size() ;i++){
            if(arr[i] == x.first){
                count++;
            }
        }
        if(count>n/3){
            ans.push_back(x.first);
        }
    }
return ans;
}
