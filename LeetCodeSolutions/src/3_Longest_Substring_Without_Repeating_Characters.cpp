class Solution
{
public:

    int contains(string str, char c)
    {

        int res = -1;
        for (const char* it = str.c_str(); (*it) != '\0'; it++)
        {
            if ((*it) == c)
            {
                return (int)(it - str.c_str());
            }
        }

        return -1;
    }

    int lengthOfLongestSubstring(string s)
    {
        string temp = "";
        int count = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (contains(temp, s.at(i)) != -1)
            {

                temp = temp.substr(contains(temp, s.at(i)) + 1, temp.size() - 1);
            }
            temp += s.at(i);
            count = temp.size() > count ? temp.size() : count;
        }
        return count;
    }
};