#include <bits/stdc++.h>
//dfs approach
void dfs(vector<int>adj[],vector<int>&visted,int node,stack<int>&st)
{
   visted[node]=1;
   for(auto it:adj[node])
   {
        if(!visted[it])
        {
            dfs(adj,visted,it,st);
        }
   }
   st.push(node);
} 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int>adj[v];
    for(auto it:edges)
    {
        int u=it[0];
        int v=it[1];
        adj[u].push_back(v);
    }
    vector<int>visted(v+1,0);
    stack<int>st;
    for(int i=0;i<v;i++)
    {
        if(!visted[i])
        {
            dfs(adj,visted,i,st);
        }
    }
    vector<int>ans;
    while(!st.empty())
    {
       int node=st.top();
       ans.push_back(node);
       st.pop();
    }
    return ans;
}
