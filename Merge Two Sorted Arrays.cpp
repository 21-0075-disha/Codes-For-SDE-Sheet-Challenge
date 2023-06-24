#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	arr1.erase(arr1.begin()+m,arr1.end()); 

 

for(int i=0;i<n;i++){  arr1.push_back(arr2[i]); }

 

sort(arr1.begin(),arr1.end()); return arr1;
}
