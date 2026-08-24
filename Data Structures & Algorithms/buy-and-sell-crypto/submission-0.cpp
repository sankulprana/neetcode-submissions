class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n=prices.size();
        int i=0;
        while(i<n){
            int maximum = 0;
            for(int j=i+1;j<n;j++){
                maximum = max(maximum,prices[j]);
            }
            profit= max(profit,maximum-prices[i]);
            
            i++;
        }
    return profit;    
    }
};
