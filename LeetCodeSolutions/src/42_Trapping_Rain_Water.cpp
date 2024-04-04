namespace _42_Trapping_Rain_Water
{
#include<solution.h>

    // 42_Trapping_Rain_Water
    class Solution
    {
    public:
        int trap(vector<int>& height)
        {

            int sz = height.size();

            int backIndex = 0;
            int backMax = 0;

            int frontIndex = 0;
            int frontMax = 0;

            int sum = 0;

            while (frontIndex + backIndex < sz)
            {
                backMax = backMax > height[sz - backIndex - 1] ? backMax : height[sz - backIndex - 1];
                frontMax = frontMax > height[frontIndex] ? frontMax : height[frontIndex];
                if (frontMax > backMax)
                {
                    sum += backMax - height[sz - backIndex - 1];
                    backIndex++;
                }
                else
                {
                    sum += frontMax - height[frontIndex];
                    frontIndex++;
                }
            }

            return sum;

        }
    };

}