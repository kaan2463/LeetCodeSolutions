namespace _326_Power_of_Three
{
#include<solution.h>

    // 326_Power_of_Three
    class Solution
    {
    public:
        bool isPowerOfThree(int n)
        {
            return (n > 0 && 1162261467 % n == 0);
        }
    };

}