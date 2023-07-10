#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    stack<int> s;
    vector<int> ans(n);
    s.push(-1);

    for(int i = n-1; i >= 0; i--){
        int curr = arr[i];
        
        while(!s.empty() && s.top() <= curr){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }
        s.push(curr);
    }

    return ans;
}
