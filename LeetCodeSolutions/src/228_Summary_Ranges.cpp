// 228_Summary_Ranges
class Solution
{
public:
    vector<string> summaryRanges(vector<int>& nums)
    {


        vector<string> s;
        if (nums.empty())
        {
            return s;
        }

        int begin = 0;
        int i = 0;
        while (i < nums.size() - 1)
        {

            if (nums[i] + 1 == nums[i + 1])
            {

            }
            else
            {
                if (begin < i)
                {
                    s.push_back(to_string(nums[begin]) + "->" + to_string(nums[i]));
                }
                else
                {
                    s.push_back(to_string(nums[begin]));
                }

                begin = i + 1;
            }

            i++;
        }
        if (begin < i)
        {
            s.push_back(to_string(nums[begin]) + "->" + to_string(nums[i]));
        }
        else
        {
            s.push_back(to_string(nums[begin]));
        }

        return s;
    }
};