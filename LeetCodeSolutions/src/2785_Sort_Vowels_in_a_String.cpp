// 2785_Sort_Vowels_in_a_String
class Solution
{
private:
    set<char> vowels = { 'A','E','I','O','U','a', 'e', 'i', 'o', 'u' };
public:
    string sortVowels(string s)
    {
        if (s.empty() || s.size() == 1)
        {
            return s;
        }
        multiset<char> ms;

        for (auto c : s)
        {
            if (vowels.find(c) != vowels.end())
            {
                ms.insert(c);
            }
        }

        if (ms.empty())
        {
            return s;
        }

        auto index = ms.begin();
        for (int i = 0; i < s.size(); i++)
        {
            if (vowels.find(s.at(i)) != vowels.end())
            {
                s[i] = *index;
                index++;
            }
        }

        return s;
    }
};