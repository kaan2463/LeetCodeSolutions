namespace _58_Length_of_Last_Word
{
#include<solution.h>

    // 58_Length_of_Last_Word
    class Solution
    {
    public:
        int lengthOfLastWord(string s)
        {
            bool begin = false;
            int count = 0;

            for (int i = s.size() - 1; i >= 0; i--)
            {
                if ((int)s.at(i) >= (int)'A' && (int)s.at(i) <= (int)'z')
                {
                    if (!begin)
                    {
                        begin = true;
                    }
                }
                else if (begin)
                {
                    return count;
                }

                if (begin)
                {
                    count++;
                }
            }

            return count;
        }
    };

}