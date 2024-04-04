// 28_Find_the_Index_of_the_First_Occurrence_in_a_String
class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        if (haystack.empty() || needle.empty() || haystack.size() < needle.size())
        {
            return -1;
        }

        int begin = 0;
        int nIndex = 0;

        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack.at(i) == needle.at(nIndex))
            {
                if (nIndex == needle.size() - 1)
                {
                    return i - nIndex;
                }
                nIndex++;
            }
            else
            {
                i = i - nIndex;
                nIndex = 0;
            }
        }

        return -1;
    }
};