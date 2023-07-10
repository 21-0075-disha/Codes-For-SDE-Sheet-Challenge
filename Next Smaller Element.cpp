#include <bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
   // Write your code here.
   stack<int> stk;
   vector<int> res(n,-1);
   for(int i=0; i<n; i++)
   {
       while(!stk.empty() && arr[stk.top()]>arr[i])
       {
           res[stk.top()] = arr[i];
           stk.pop();
       }
       stk.push(i);
   }
   return res;
}
