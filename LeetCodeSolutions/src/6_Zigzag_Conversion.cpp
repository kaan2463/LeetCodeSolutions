class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (s.size() < 3 || numRows < 2)
        {
            return s;
        }
        char res[1001] = {};
        int count = 0;
        for (int i = 0; i < numRows; i++)
        {
            int index = i;
            bool step = true;
            int inc = 0;
            while (index < s.size())
            {
                if (step)
                {
                    inc = 2 * numRows - 2 * (i + 1);
                }
                else
                {
                    inc = 2 * (i + 1) - 2;
                }
                step = !step;
                if (inc == 0)
                {
                    continue;
                }
                res[count] = s.at(index);
                index += inc;
                count++;
            }

        }
        return string(res);
    }
};