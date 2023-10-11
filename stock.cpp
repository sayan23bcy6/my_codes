int maxProfit(vector<int> &prices)
{
    int max_profit = 0;
    int min = prices[0];
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] > min)
        {
            continue;
        }
        else
        {
            min = prices[i];
        }
        for (int j = i + 1; j < prices.size(); j++)
        {
            if ((prices[j] - prices[i]) > max_profit)
            {
                max_profit = prices[j] - prices[i];
            }
        }
        if (prices[i] == 0)
        {
            break;
        }
    }
    return max_profit;
}