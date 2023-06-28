#include<bits/stdc++.h>

bool cmp(pair<int, int>& a, pair<int, int>& b){

    return a.second < b.second;

}

int maximumActivities(vector<int> &start, vector<int> &finish) {

    vector<pair<int, int>> v;

    for(int i=0 ; i < start.size(); i++){

        v.emplace_back(make_pair(start[i], finish[i]));

    }

    sort(v.begin() , v.end(), cmp);

    int ans=0;

    int e = -1;

    for(auto val : v){

        if(val.first > e-1){

            ans+=1;

            e= val.second;

        }

    }

    return ans;

}
