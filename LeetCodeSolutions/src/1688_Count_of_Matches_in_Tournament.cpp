// 1688_Count_of_Matches_in_Tournament
class Solution
{
public:
    int numberOfMatches(int n)
    {
        if (n < 2)
        {
            return 0;
        }
        if (n % 2 == 0)
        {
            return (n / 2) + numberOfMatches(n / 2);
        }

        return (n - 1) / 2 + numberOfMatches(n - ((n - 1) / 2));
    }
};