// 2423_Remove_Letter_To_Equalize_Frequency
class Solution
{
public:
    bool equalFrequency(string word)
    {
        map<char, int> m;
        map<int, int> m1;

        for (auto c : word)
        {
            m[c]++;
        }

        for (auto item : m)
        {
            m1[item.second]++;
        }

        if (m1.size() == 1 && m1.begin()->second == 1)
        {
            return true;
        }

        if (m1.size() > 2 || m1.size() == 0)
        {
            return false;
        }

        if (m1[1] > 0 && m1.size() == 1)
        {
            return true;
        }

        if (m1[1] == 1 && m1.size() == 2)
        {
            return true;
        }

        if (m1[1] == 0)
        {
            m1.erase(1);
        }

        if (m1.size() == 2)
        {
            auto it = m1.begin();
            int a = it->first;
            int a2 = it->second;
            it++;
            int b = it->first;
            int b2 = it->second;
            if (a > b && a2 == 1)
            {
                return (a - b) == 1;
            }
            else if (b > a && b2 == 1)
            {
                return (b - a) == 1;
            }
            else
            {
                return false;
            }
        }

        return false;
    }
};