class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int f = 0;
        int s = 1;
        int profit = 0;
        while(s<prices.size()){
            int temp = 0;
            if(prices[f]>prices[s]){
                f = s;
                s++;
            }else{
                 temp = prices[s]-prices[f];
                 s++;
            }

            if(temp>profit)
                profit = temp;
            
        }
        return profit;
    }
};
