// 820_Short_Encoding_of_Words
class Solution
{
public:
    int minimumLengthEncoding(vector<string>& words)
    {
        map<string, int> wMap;
        string s;
        for (int i = 0; i < words.size(); i++)
        {
            wMap[words[i]] = 1;
        }
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 1; j < words[i].size(); j++)
            {
                s = words[i].substr(j);
                if (wMap[s] == 1)
                {
                    wMap[s] = 0;
                }

            }
        }
        int res = 0;
        for (auto item : wMap)
        {
            if (item.second == 1)
            {
                res += item.first.size() + 1;
            }
        }
        return res;
    }
};