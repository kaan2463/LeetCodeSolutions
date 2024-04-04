namespace _26_Remove_Duplicates_from_Sorted_Array
{
#include<solution.h>

    // 26_Remove_Duplicates_from_Sorted_Array
    class Solution
    {
    public:
        int removeDuplicates(vector<int>& nums)
        {
            if (nums.empty())
            {
                return nums.size();
            }
            int shift = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (i > shift && nums[i - shift - 1] == nums[i])
                {
                    shift++;
                    continue;
                }
                if (shift > 0)
                {
                    nums[i - shift] = nums[i];
                }
            }

            return nums.size() - shift;
        }
    };

}