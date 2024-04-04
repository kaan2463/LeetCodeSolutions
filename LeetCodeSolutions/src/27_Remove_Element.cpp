namespace _27_Remove_Element
{
#include<solution.h>

    class Solution
    {
    public:
        int removeElement(vector<int>& nums, int val)
        {
            int shift = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                if (shift > 0)
                {
                    nums[i - shift] = nums[i];
                }
                if (val == nums[i])
                {
                    shift++;
                }

            }
            return nums.size() - shift;

        }
    };

}