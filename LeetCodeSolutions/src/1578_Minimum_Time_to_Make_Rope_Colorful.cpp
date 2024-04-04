// 1578_Minimum_Time_to_Make_Rope_Colorful
class Solution
{
public:
    int minCost(string colors, vector<int>& neededTime)
    {

        char prev = '\0';
        int max = 0;
        int sum = 0;
        int allSum = 0;
        for (int i = 0; i < colors.size(); i++)
        {
            if (prev == colors.at(i))
            {
                max = max < neededTime[i] ? neededTime[i] : max;
                sum += neededTime[i];
            }
            else
            {
                allSum += sum - max;
                sum = neededTime[i];
                max = neededTime[i];
            }
            prev = colors.at(i);
        }

        allSum += sum - max;

        return allSum;

    }
};