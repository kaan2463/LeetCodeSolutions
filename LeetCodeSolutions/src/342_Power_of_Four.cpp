// 342_Power_of_Four
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        int mask = 0x55555555;

        if (n > 0 && (n & mask) == n && ((n & (n - 1)) == 0))
        {
            return true;
        }
        return false;
    }
};