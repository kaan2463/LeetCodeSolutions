namespace _14_Longest_Common_Prefix
{
#include<solution.h>

    // 14_Longest_Common_Prefix
    class Solution
    {
    public:
        string getCommon(string a, string b)
        {
            string str = "";
            for (int i = 0; i < a.size() && i < b.size(); i++)
            {
                if (a.at(i) != b.at(i))
                {
                    break;
                }
                str += a.at(i);
            }
            return str;
        }
        string longestCommonPrefix(vector<string>& strs)
        {
            if (strs.empty())
            {
                return "";
            }
            string str = strs[0];
            for (int i = 1; i < strs.size(); i++)
            {
                str = getCommon(str, strs[i]);
            }
            return str;
        }
    };

}