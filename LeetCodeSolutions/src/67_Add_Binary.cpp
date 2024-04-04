// 67_Add_Binary
class Solution
{
public:
    bool xorBool(bool a, bool b)
    {

        return ((!a) & b) | (a & (!b));
    }

    string addBinary(string a, string b)
    {

        if (a.size() < b.size())
        {
            return addBinary(b, a);
        }

        int l = 0, r = 0;
        int c = 0, s = 0;
        string sum = "";

        for (int i = a.size() - 1; 0 <= i; i--)
        {

            if (b.size() - 1 < a.size() - 1 - i)
            {
                r = 0;
            }
            else
            {
                r = (int)(b.at(b.size() - a.size() + i) - '0');
            }

            l = (int)(a.at(i) - '0');


            s = xorBool(xorBool(l, r), c);
            c = (xorBool(l, r) & c) | (l & r);

            sum = to_string(s) + sum;

            printf("%d %d\n", l, r);
        }
        if (c)
        {
            sum = to_string(c) + sum;
        }

        return sum;
    }
};