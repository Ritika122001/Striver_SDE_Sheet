#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
     int max_profit= 0;
        int miniPrice=INT_MAX;
         for(int i=0;i<prices.size();i++)
         {
              if(prices[i]<miniPrice)
              {
                  miniPrice=prices[i];
              }
             
             max_profit = max(max_profit, prices[i]-miniPrice);
         }
        
        return max_profit;
}
