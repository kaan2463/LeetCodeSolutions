namespace _20_Valid_Parentheses
{
#include<solution.h>

    // 20_Valid_Parentheses
    class Solution
    {
    public:
        bool isValid(string s)
        {
            stack<int> st;
            for (int i = 0; i < s.size(); i++)
            {
                if ('(' == s.at(i) || '{' == s.at(i) || '[' == s.at(i))
                {
                    st.push(s.at(i));
                    continue;
                }
                if (st.empty())
                {
                    return false;
                }
                switch (st.top())
                {
                case '(':
                    if (')' != s.at(i))
                    {
                        return false;
                    }
                    break;
                case '{':
                    if ('}' != s.at(i))
                    {
                        return false;
                    }
                    break;
                case '[':
                    if (']' != s.at(i))
                    {
                        return false;
                    }
                    break;
                default:
                    return false;
                }
                st.pop();

            }
            return st.empty();
        }
    };

}