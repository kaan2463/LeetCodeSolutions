namespace _268_Missing_Number
{
#include<solution.h>

    // 268_Missing_Number
    class Solution
    {
    public:
        int missingNumber(vector<int>& nums)
        {
            int sum = 0;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                sum += nums[i];
            }

            return (n * (n + 1) / 2) - sum;

        }
    };

}