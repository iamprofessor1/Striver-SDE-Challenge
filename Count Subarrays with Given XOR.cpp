#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int>ump;
    int cnt = 0 , xorr = 0;
    for(auto it : arr){
        xorr = xorr^it;
        if(xorr == x){
            cnt++;
        }
        if(ump.find(xorr^x) != ump.end()){
            cnt+=ump[xorr^x];
        }
        ump[xorr]++;
    }
    return cnt;
}
