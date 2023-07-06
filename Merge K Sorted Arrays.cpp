#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)

{

    priority_queue<int, vector<int>, greater<int>> pq;

    int n = 1;

    for(int i=0;i<k;i++)

    {

        int n = kArrays[i].size();

        for(int j=0;j<n;j++)

        {

            pq.push(kArrays[i][j]);

        }

    }

    

    vector<int> ans;

    while(!pq.empty())

    {

        ans.push_back(pq.top());

        pq.pop();

    }

    

    return ans;

}
