namespace _35_Search_Insert_Position
{
#include<solution.h>

    // 35_Search_Insert_Position
    class Solution
    {
    public:
        int searchInsert(vector<int>& nums, int target)
        {

            if (nums.empty())
            {
                return 0;
            }

            int begin = 0;
            int end = nums.size() - 1;
            int index = 0;

            while (begin < end)
            {

                if (target <= nums[index])
                {
                    end = index;
                }
                else
                {
                    begin = index + 1;
                }
                index = begin + (end - begin) / 2;
            }


            return nums[index] < target ? index + 1 : index;
        }
    };

}