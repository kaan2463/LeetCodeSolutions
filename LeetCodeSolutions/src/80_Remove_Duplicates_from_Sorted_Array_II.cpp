// 80_Remove_Duplicates_from_Sorted_Array_II
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
        const int NEXT_COUNT = 2;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > shift && nums[i - shift - 1] == nums[i])
            {

                if (count > NEXT_COUNT - 2)
                {
                    shift++;
                }
                else
                {
                    nums[i - shift] = nums[i];
                }
                count++;
                continue;
            }

            nums[i - shift] = nums[i];
            count = 0;
        }

        return nums.size() - shift;
    }
};