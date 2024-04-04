// 1332_Remove_Palindromic_Subsequences
class Solution
{
public:
    int removePalindromeSub(string s)
    {
        if (!s.size())return 0;

        int i = 0, j = s.size() - 1;

        while (i < j)
        {

            if (s[i] != s[j])return 2;

            i++;
            j--;

        }


        return 1;
    }
};