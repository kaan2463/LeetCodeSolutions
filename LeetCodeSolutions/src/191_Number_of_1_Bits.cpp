// 191_Number_of_1_Bits
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int sum = 0;
        for (int i = 0; i < 32; i++)
        {

            if (n & 0x1)
            {
                sum++;
            }
            n = n >> 1;
        }
        return sum;
    }
};