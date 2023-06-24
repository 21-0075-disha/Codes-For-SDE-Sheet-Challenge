#include <bits/stdc++.h>

 

vector<int> majorityElementII(vector<int> &arr)

{

    

    int n = arr.size();

    int inc = n/3;

 

    vector<int> ans;

    vector<int> unique;

    map<int, int> mp;

 

    for(auto it : arr){

        if(mp[it] == 0) unique.push_back(it);

        mp[it]++;

    }

 

    for(auto it : unique)

        if(mp[it] > inc) ans.push_back(it);

 

    return ans;

 

}
