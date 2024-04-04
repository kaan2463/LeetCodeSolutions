namespace _70_Climbing_Stairs
{
#include<solution.h>

    // 70_Climbing_Stairs
    class Solution
    {
        vector<int> memo;
    public:
        int climbStairs(int n)
        {
            if (memo.size() > n - 1)
            {
                return memo[n - 1];
            }
            if (n < 0)
            {
                return 0;
            }
            if (n == 0)
            {
                return 1;
            }
            memo.push_back(climbStairs(n - 1) + climbStairs(n - 2));
            return memo.back();
        }
    };

}