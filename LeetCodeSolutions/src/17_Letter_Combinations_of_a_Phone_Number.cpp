namespace _17_Letter_Combinations_of_a_Phone_Number
{
#include<solution.h>

    // 17_Letter_Combinations_of_a_Phone_Number
    class Solution
    {
        vector<string> letters = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    public:

        int charToInt(char c)
        {
            return (int)(c - '0');
        }

        vector<string> letterCombinations(string digits)
        {
            vector<string> v;
            if (digits.empty() || digits == "")
            {
                return v;
            }
            combinations(digits, "", v);
            return v;
        }

        void combinations(string digits, string letter, vector<string>& v)
        {
            if (digits.empty())
            {
                v.push_back(letter);
                return;
            }
            for (auto c : letters[charToInt(digits[0] - 2)])
            {
                combinations(digits.substr(1, digits.size() - 1), letter + (char)c, v);
            }
        }
    };

}