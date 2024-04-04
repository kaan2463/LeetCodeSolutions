namespace _905_Sort_Array_By_Parity
{
#include<solution.h>

    // 905_Sort_Array_By_Parity
    class Solution
    {
    public:
        vector<int> sortArrayByParity(vector<int>& nums)
        {
            if (nums.empty())
            {
                return nums;
            }

            int index = 0;
            int temp = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] % 2 == 0)
                {
                    temp = nums[i];
                    nums[i] = nums[index];
                    nums[index] = temp;
                    index++;
                }
            }
            return nums;
        }
    };

}