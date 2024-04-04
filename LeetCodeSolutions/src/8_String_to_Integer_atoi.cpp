namespace _8_String_to_Integer_atoi
{
#include<solution.h>

    class Solution
    {
    public:
        int myAtoi(string s)
        {
            int digit = 0, num = 0, sign = 1, is_num = false;
            bool is_signed = false;
            for (int i = 0; i < s.size(); i++)
            {
                if (s.at(i) == ' ')
                {
                    if (is_num || is_signed)
                    {
                        return sign * num;
                    }
                    continue;
                }
                if (s.at(i) == '-')
                {
                    if (is_num)
                    {
                        return sign * num;
                    }
                    if (is_signed)
                    {
                        return 0;
                    }
                    sign *= -1;
                    is_signed = true;
                    continue;
                }
                if (s.at(i) == '+')
                {
                    if (is_num)
                    {
                        return sign * num;
                    }
                    if (is_signed)
                    {
                        return 0;
                    }
                    is_signed = true;
                    continue;
                }

                digit = (s.at(i) - '0');

                if (digit > 9 || digit < 0)
                {
                    if (num == 0)
                    {
                        return 0;
                    }
                    return sign * num;
                }

                if ((INT_MAX - digit) / 10 < num)
                {
                    return sign == 1 ? INT_MAX : INT_MIN;
                }

                num *= 10;
                num += digit;
                is_num = true;


            }
            return sign * num;
        }
    };

}