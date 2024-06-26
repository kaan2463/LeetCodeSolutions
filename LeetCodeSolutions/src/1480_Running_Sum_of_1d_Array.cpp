namespace _1480_Running_Sum_of_1d_Array
{
#include<solution.h>

    // 1480_Running_Sum_of_1d_Array
    class Solution
    {
    public:
        vector<int> runningSum(vector<int>& nums)
        {
            vector<int> v(nums.size());
            int sum = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                sum += nums[i];
                v[i] = sum;
            }
            return v;
        }
    };

}