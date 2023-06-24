#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int, vector<int>> valuesofxor;

int xorvalue = 0;

int temp=0;

int counter=0;

for(int i=0; i<arr.size(); i++){

xorvalue = xorvalue ^ arr[i];

if(xorvalue==x){

counter++;

}

temp = xorvalue ^ x;

if (valuesofxor.find(temp) != valuesofxor.end()) {

counter += valuesofxor[temp].size();

}

valuesofxor[xorvalue].push_back(i);

}

return counter;
}
