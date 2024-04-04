namespace _349_Intersection_of_Two_Arrays
{
#include<solution.h>

    // 349_Intersection_of_Two_Arrays
    class Solution
    {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
        {
            map<int, bool> mm;
            vector<int> inter;

            for (auto item : nums1)
            {
                mm[item] = true;
            }
            for (auto item : nums2)
            {
                if (mm[item])
                {
                    inter.push_back(item);
                    mm[item] = false;
                }
            }
            return inter;
        }
    };

}