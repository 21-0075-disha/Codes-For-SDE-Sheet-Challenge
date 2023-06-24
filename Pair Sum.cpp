#include <bits/stdc++.h>

 

vector<vector<int>> pairSum(vector<int> &arr, int s){

// Write your code here.

vector<vector<int>>ans;

int n=arr.size();

for(int i=0;i<n;i++){

for(int j=i+1;j<n;j++){

if(arr[i]+arr[j]==s && i!=j){

vector<int>temp;

temp.push_back(arr[i]);

temp.push_back(arr[j]);

sort(temp.begin(),temp.end());

ans.push_back(temp);

}

}

}

sort(ans.begin(),ans.end());

return ans;

}
