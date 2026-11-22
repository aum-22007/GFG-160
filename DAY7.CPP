class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int a = 0;
        int n = prices.size();
        
        for(int i = 1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
            {
                a = a + prices[i] - prices[i-1];
            }
        }
        return a;
    }
};
