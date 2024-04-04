namespace _9_Palindrome_Number
{
#include<solution.h>

    class Solution
    {
    public:
        bool isPalindrome(int x)
        {
            if (x < 0)
            {
                return false;
            }
            long int a = 0;
            int b = x;
            while (b != 0)
            {
                a = a * 10;
                a = a + (b % 10);
                b = b / 10;
            }
            return !(a - x);
        }
    };

}