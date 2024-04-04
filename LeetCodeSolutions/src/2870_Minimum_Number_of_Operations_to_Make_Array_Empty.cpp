// 2870_Minimum_Number_of_Operations_to_Make_Array_Empty
class Solution
{
    map<int, int> memo;

    int min(int a, int b)
    {
        return a > b ? b : a;
    }

public:
    int minOperations(vector<int>& nums)
    {
        map<int, int> counter;
        for (int i = 0; i < nums.size(); i++)
        {
            counter[nums[i]]++;
        }

        int sum = 0;

        for (auto item : counter)
        {
            if (item.second == 1)
            {
                return -1;
            }
            sum += findMinimumMove(item.second);
        }

        return sum;
    }

    int findMinimumMove(int x)
    {
        if (memo[x] > 0)
        {
            return memo[x];
        }
        if (x < 1)
        {
            return 0;
        }

        memo[x] = min(findMinimumMove(x - 2), findMinimumMove(x - 3)) + 1;
        return memo[x];
    }
};