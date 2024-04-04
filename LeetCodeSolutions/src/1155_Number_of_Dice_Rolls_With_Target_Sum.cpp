// 1155_Number_of_Dice_Rolls_With_Target_Sum
class Solution
{
    int memo[31][1001];
public:
    int numRollsToTarget(int n, int k, int target)
    {
        for (int i = 0; i < 31; i++)
        {
            fill_n(memo[i], 1001, -1);
        }
        return numRollsToTarget_r(n, k, target);
    }

    int numRollsToTarget_r(int n, int k, int target)
    {

        if (target == 0 && n == 0)
        {
            return 1;
        }

        if (n < 1 || target < 1)
        {
            return 0;
        }

        if (memo[n][target] != -1)
        {
            return memo[n][target];
        }

        int sum = 0;
        for (int i = 1; i <= k; i++)
        {
            sum = (sum + numRollsToTarget_r(n - 1, k, target - i)) % 1000000007;
        }

        memo[n][target] = sum;

        return memo[n][target];
    }
};