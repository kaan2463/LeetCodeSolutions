// 2706_Buy_Two_Chocolates
class Solution
{
public:
    int buyChoco(vector<int>& prices, int money)
    {
        int diff = -1;
        int max = -1;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] >= money)
            {
                continue;
            }
            diff = money - prices[i];
            for (int j = i + 1; j < prices.size(); j++)
            {
                if (diff < prices[j])
                {
                    continue;
                }

                max = (diff - prices[j]) > max ? (diff - prices[j]) : max;
            }
        }

        return max >= 0 ? max : money;
    }
};