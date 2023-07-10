#include <bits/stdc++.h>
void nextSmallestIndex(vector<int> &heights, vector<int>& next, int n){
    stack<int> stack;
    stack.push(n);
    for(int i = n - 1; i >= 0; i--){
        if((stack.top() == n) || (heights[stack.top()] < heights[i])){
            next[i] = stack.top();
            stack.push(i);
        }
        else{
            while((stack.top() != n) && (heights[stack.top()] >= heights[i])){
              stack.pop();
            }
            next[i] = stack.top();
            stack.push(i);
        }
    }    
} 

void prevSmallestIndex(vector<int> &heights, vector<int>& prev, int n){
    stack<int> stack;
    stack.push(-1);
    for(int i = 0; i < n; i++){
        if((stack.top() == -1) || (heights[stack.top()] < heights[i])){
            prev[i] = stack.top();
            stack.push(i);
        }
        else{
            while((stack.top() != -1) && (heights[stack.top()] >= heights[i])){
              stack.pop();
            }
            prev[i] = stack.top();
            stack.push(i);
        }
    }    
}

int largestRectangle(vector <int> & heights) {
    // Approach: Using Next smallest element and previous smallest element
    int n = heights.size();
    // generate the next smallest element index array
    vector<int> next(n);
    nextSmallestIndex(heights, next, n);
    // generate previous smallest element index array
    vector<int> prev(n);
    prevSmallestIndex(heights, prev, n);

    int ans = INT_MIN;

    for(int i = 0; i < n; i++){
      ans = max(ans,(heights[i]*(next[i] - prev[i] - 1)));
    }
    
    return ans;
}
