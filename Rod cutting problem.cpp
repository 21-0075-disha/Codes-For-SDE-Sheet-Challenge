#include<bits/stdc++.h>

int f(vector<int>price,int ind,int len,vector<vector<int>>&dp){

    // Base Case

    if(ind==0)

        return len*price[0];

    if(dp[ind][len]!=-1) return dp[ind][len];

    // Not cut

    int nc = f(price,ind-1,len,dp);

    //cut

    int c = 0;

    if(len-(ind+1)>=0)

    c = price[ind] + f(price,ind,len-(ind+1),dp);

    

    return dp[ind][len] = max(c,nc);

}

int Tab(int n,int w,vector<int> &value){

   

    vector<vector<int>> dp(n,vector<int>(w+1,0));

 

    // Base Case

    for(int Capacity = 0;Capacity<=w;Capacity++) 

       dp[0][Capacity] = Capacity*value[0];

    

    for(int ind = 1;ind<n;ind++){

        for(int Capacity = 0;Capacity<=w;Capacity++){

            int nt = dp[ind-1][Capacity];

            int t = 0;

            if(ind+1<=Capacity)

              t = value[ind] + dp[ind][Capacity-(ind+1)];

            dp[ind][Capacity] = max(t,nt);

        }

    }

    

    return dp[n-1][w];

}

int SO(int n,int w,vector<int> &value){

   

    vector<int>prev(w+1,0);

 

    // Base Case

    for(int Capacity = 0;Capacity<=w;Capacity++) 

       prev[Capacity] = (Capacity)*value[0];

    

    for(int ind = 1;ind<n;ind++){

        vector<int>curr(w+1,0);

        for(int Capacity = 0;Capacity<=w;Capacity++){

            int nt = prev[Capacity];

            int t = 0;

            if((ind+1)<=Capacity)

              t = value[ind] + curr[Capacity-ind-1];

            curr[Capacity] = max(t,nt);

        }

        prev = curr; 

    }

    

    return prev[w];

}

int SO2(int n,int w,vector<int> &value){

   

    vector<int>prev(w+1,0);

 

    // Base Case

    for(int Capacity = 0;Capacity<=w;Capacity++) 

       prev[Capacity] = (Capacity)*value[0];

    

    for(int ind = 1;ind<n;ind++){

        for(int Capacity = 0;Capacity<=w;Capacity++){

            int nt = prev[Capacity];

            int t = 0;

            if(ind+1<=Capacity)

              t = value[ind] + prev[Capacity-(ind+1)];

            prev[Capacity] = max(t,nt);

        }

    }

    return prev[w];

}

int cutRod(vector<int> &price, int n)

{

    // vector<vector<int>>dp(n,vector<int>(n+1,-1));

    // return f(price,n-1,n,dp);

    // return Tab(n,n,price);

    // return SO(n,n,price);

    return SO2(n,n,price);

}
