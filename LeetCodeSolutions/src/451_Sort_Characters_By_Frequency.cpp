// 451_Sort_Characters_By_Frequency
class Solution
{
public:
    string frequencySort(string s)
    {
        map<char, int> m;
        map<int, vector<char>> mvec;

        for (auto c : s)
        {
            m[c]++;
        }

        for (auto item : m)
        {
            mvec[item.second].push_back(item.first);
        }

        char* carr = new char[s.size()];

        int last = s.size() - 1;
        for (auto item : mvec)
        {
            for (auto el : item.second)
            {
                for (int i = 0; i < item.first; i++)
                {
                    carr[last] = el;
                    last--;
                }
            }
        }

        string str(carr, s.size());
        delete[] carr;


        return str;
    }
};