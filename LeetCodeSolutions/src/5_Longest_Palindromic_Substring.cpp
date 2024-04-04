class Solution
{
public:
    string longestPalindrome(string s)
    {

        int sz = s.size();
        string str = "";

        if (sz < 1)
        {
            return "";
        }
        int index = 0;
        int end = sz - 1;
        int j = 0;
        int max = 0;
        for (int i = 0; i < sz; i++)
        {
            index = i;
            j = sz - 1;
            end = sz - 1;

            while (index < j)
            {

                if (s.at(index) == s.at(j))
                {
                    index++;
                    j--;
                }
                else
                {
                    index = i;
                    end--;
                    j = end;
                }
            }

            if (max < end - i)
            {
                max = end - i;
                str = s.substr(i, max + 1);
            }
        }

        if (max == 0)
        {
            str = s.at(0);
        }

        return str;
    }
};