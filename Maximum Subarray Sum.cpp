#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long int sum = 0;
    long long int maxSum = INT_MIN;

    for(int x=0;x<n;x++) {
        ((sum+=arr[x]) < 0 ? sum = 0 : sum = sum) > maxSum ? maxSum = sum : maxSum = maxSum;
    }
    return maxSum;
}
