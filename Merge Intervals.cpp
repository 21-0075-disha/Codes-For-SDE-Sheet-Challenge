#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)

{

    sort(intervals.begin(),intervals.end());

    int n=intervals.size();

    if(n<=1) return intervals;

    vector<vector<int>> ans;

    ans.push_back(intervals[0]);

    for(int i=1;i<n;i++){

        if(intervals[i][0]<=ans.back()[1]){

            ans.back()[1]=max(ans.back()[1],intervals[i][1]);

        }

        else ans.push_back(intervals[i]);

    }

    return ans;

}
