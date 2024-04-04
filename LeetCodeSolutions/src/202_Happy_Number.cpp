// 202_Happy_Number
class Solution
{
    map<int, bool> memo;
public:

    int square(int x)
    {
        return x * x;
    }
    bool isHappy(int n)
    {
        if (n < 0)
        {
            memo.clear();
            return false;
        }
        if (memo[n])
        {
            memo.clear();
            return false;
        }
        memo[n] = true;
        int sum = 0;
        while (n > 0)
        {
            sum += square(n % 10);
            n /= 10;
        }
        if (sum == 1)
        {
            return true;
        }
        return isHappy(sum);
    }
};