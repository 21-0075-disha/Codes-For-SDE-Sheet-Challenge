#include <bits/stdc++.h> 

void sort012(int *arr, int n)

{

   // Count Sort

   // Count number of 0s, 1s & 2s

   int Zero=0, One=0, Two=0;

   for(int i=0; i<n; i++){

      if(arr[i]==0)

         Zero++;

      if(arr[i]==1)

         One++;

      if(arr[i]==2)

         Two++;

   }

 

   int i=0;

   while(Zero--)

      arr[i++] = 0;

   while(One--)

      arr[i++] = 1;

   while(Two--)

      arr[i++] = 2;

}
