// 201_Bitwise_AND_of_Numbers_Range
class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {
        int res = left ^ right;
        if (res > left)
        {
            return 0;
        }

        int count = 0;
        while (count < 32 && !(0x80000000 & res))
        {
            res = res << 1;
            count++;
        }
        res = right >> 32 - count;
        res = res << 32 - count;
        return res;
    }
};