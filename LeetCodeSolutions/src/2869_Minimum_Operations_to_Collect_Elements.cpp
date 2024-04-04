namespace _2869_Minimum_Operations_to_Collect_Elements
{
#include<solution.h>

    // 2869_Minimum_Operations_to_Collect_Elements
    class Solution
    {
    public:
        int minOperations(vector<int>& nums, int k)
        {

            map<int, int> mm;

            int maxFront = 0;
            int maxBack = 0;
            /* for (int i=0;i<nums.size();i++) {
                 if (nums[i]<=k) {
                     if (!mm[nums[i]]) {
                         maxFront = i+1;
                     }
                     mm[nums[i]]++;
                 }
             }

             mm.clear(); */

            for (int i = nums.size() - 1; i >= 0; i--)
            {
                if (nums[i] <= k)
                {
                    if (!mm[nums[i]])
                    {
                        maxBack = nums.size() - i;
                    }
                    mm[nums[i]]++;
                }
            }
            mm.clear();

            //return maxBack<maxFront?maxBack:maxFront;
            return maxBack;
        }
    };

}