#include <bits/stdc++.h> 

vector<int> nextPermutation(vector<int> &permutation, int n)

{

    vector<int> nextPer=permutation;

 

    int i=n-2,j;

 

    //find pivot element-> after which the decreasing sequence is established

    while(i>=0 && nextPer[i+1] < nextPer[i]){

      i--;

    }

 

    //check if there is any pivot element found or not

    if(i<0){

        //no pivot element i.e. the vector is already in its highest form, therefore, reverse it

        reverse(nextPer.begin(), nextPer.end());

    } 

    else{

        //there is a pivot element

        //swap this pivot element with the next successor it has in the non-decreasing sequence.

        j=n-1;

        while(j>=0 && nextPer[i]>nextPer[j]) {

            j--;

        }

 

        //swap pivot element with its successor

        swap(nextPer[i], nextPer[j]);

        //now reverse the non-decreasing seqeunce

        reverse(nextPer.begin()+i+1, nextPer.end());

    }

    return nextPer;

}
