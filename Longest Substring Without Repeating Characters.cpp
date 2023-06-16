#include <bits/stdc++.h> 
int uniqueSubstrings(string & s)
{
    //Write your code here
    
    int res = 0;
    vector<int>last(256,-1);
    int start =0;
    for(int i = 0 ; i<s.size();i++){
        start = max(start , last[s[i]]+1);
        int max_ending = i - start +1;
        res = max(res,max_ending);
        last[s[i]] = i;
    }
    return res;
}
