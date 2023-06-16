#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    int res= 0 ;
    for(int i = 0 ;i<intervals.size();i++){
        if(intervals[res][1]>= intervals[i][0]){
            intervals[res][0] = min(intervals[res][0],intervals[i][0]);
            intervals[res][1] = max(intervals[res][1],intervals[i][1]);
        }
        else{
            res++;
            intervals[res] = intervals[i];
        }
    }
    intervals.resize(res+1);
    return intervals;
}
