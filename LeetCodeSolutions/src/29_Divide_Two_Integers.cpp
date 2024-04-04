// 29_Divide_Two_Integers
class Solution
{
public:
    int divide(int dividend, int divisor)
    {

        if (divisor == 0)
        {
            return 0;
        }

        if (sizeof(int) > 4)
        {
            return 0;
        }

        bool sign = dividend >> 31;

        if (divisor >> 31)
        {
            sign = !sign;
        }

        unsigned int dividend_ = dividend >> 31 ? ((unsigned int)(~dividend & 0x7fffffff)) + 1 : dividend;
        unsigned int divisor_ = divisor >> 31 ? ((unsigned int)(~divisor & 0x7fffffff)) + 1 : divisor;

        if (dividend_ < divisor_)
        {
            return 0;
        }

        unsigned int powSum = divisor;
        unsigned int result = 0;
        int count = 0;
        while (dividend_ >= divisor_)
        {
            count = 0;
            powSum = divisor_;
            while ((powSum << 1) > 0 && (powSum << 1) <= dividend_)
            {
                powSum = powSum << 1;
                count++;
            }
            result += 1 << count;
            dividend_ -= powSum;
        }
        int result_int = (int)(sign ? 0x80000000 | (~(result - 1) & 0x7fffffff) : result);
        if (result_int == 0x80000000)
        {
            return sign ? result_int : 0x7fffffff;
        }
        return result_int;
    }
};