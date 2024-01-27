//best time to buy and sell stock
class solution{
    public:
    int maxprofit(vector<int>&prices){
    int min_price=prices[0];
    int maxprof=0;
    for(int i=1;i<prices.size();i++)  
    {
        maxprof=max(maxprof,prices[i]-min_price);
        min_price=min(prices[i],min_prices);
    }
    return maxprof;
    }
};