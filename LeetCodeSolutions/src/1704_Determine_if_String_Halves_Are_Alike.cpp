// 1704_Determine_if_String_Halves_Are_Alike
class Solution
{

    bool isWovel(char c)
    {
        switch (c)
        {
        case 'a':
            return true;
        case 'e':
            return true;
        case 'i':
            return true;
        case 'o':
            return true;
        case 'u':
            return true;
        case 'A':
            return true;
        case 'E':
            return true;
        case 'I':
            return true;
        case 'O':
            return true;
        case 'U':
            return true;
        default:
            return false;
        }
        return false;
    }
public:
    bool halvesAreAlike(string s)
    {
        int sz = s.size();
        int hsz = sz / 2;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < hsz; i++)
        {
            count1 += isWovel(s.at(i));
            count2 += isWovel(s.at(hsz + i));
        }
        return count1 == count2;
    }
};