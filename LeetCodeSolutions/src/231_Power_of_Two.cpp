namespace _231_Power_of_Two
{
#include<solution.h>

    // 231_Power_of_Two
    class Solution
    {
    public:
        bool isPowerOfTwo(int n)
        {
            if (n < 1)
            {
                return false;
            }
            return (n & (n - 1)) == 0;
        }
    };

}