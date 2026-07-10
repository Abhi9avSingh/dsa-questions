#include<bits\stdc++.h>

using namespace std;
  int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;
        for ( int i = 0 ; i< prices.size();i++){
            if ( prices[i]<mini ){
                mini = prices[i];
            }
             
         profit = max( profit, prices[i]- mini);
            
        }
         
  
        return profit;

        
        
    }