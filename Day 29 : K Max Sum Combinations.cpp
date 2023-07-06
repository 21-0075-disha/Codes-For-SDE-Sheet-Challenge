#include <bits/stdc++.h> 

vector<int> kMaxSumCombination(vector<int> &A, vector<int> &B, int n, int C){

    // Write your code here.

 

    priority_queue<pair<int,pair<int,int>>>pq;

    sort(A.begin(),A.end(),greater<int>());

    sort(B.begin(),B.end(),greater<int>());

    

    //push start element

    set<pair<int,int>>st;

    vector<int>ans;

    pq.push({A[0]+B[0],{0,0}});

    st.insert({0,0});

    

   // int n=A.size();

    for(int i=0;i<C;i++){

        

        auto it=pq.top();

        pq.pop();

        

        ans.push_back(it.first);

        

        if(it.second.first+1<n && st.find({it.second.first+1,it.second.second})==st.end()) {

            

            st.insert({it.second.first+1,it.second.second});

            pq.push({A[it.second.first+1]+B[it.second.second],{it.second.first+1,it.second.second}});

        }

        if(it.second.second+1<n && st.find({it.second.first,it.second.second+1})==st.end()) {

            

            st.insert({it.second.first,it.second.second+1});

            pq.push({A[it.second.first]+B[it.second.second+1],{it.second.first,it.second.second+1}});

        }

        

    }

    return ans;

   

}
