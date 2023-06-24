#include <bits/stdc++.h> 

int maximumProfit(vector<int> &prices){

      int maxProfit=0;

      int mini=prices[0];

      int cost=0;

      for(int i=0;i<prices.size();i++){

          cost=prices[i]-mini;

          maxProfit=max(maxProfit,cost);

          mini=min(prices[i],mini);

      }

      return maxProfit;

}
