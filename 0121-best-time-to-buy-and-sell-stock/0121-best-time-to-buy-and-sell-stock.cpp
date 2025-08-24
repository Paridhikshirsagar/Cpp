class Solution {
public:
    int maxProfit(vector<int>& prices)
     {
        int minPrice = INT_MAX;


        int best = 0;
        for (int p : prices) 
        {
            if (p < minPrice) minPrice = p ;
            else best = max(best,p - minPrice);
        } 

        return best;
    }
};