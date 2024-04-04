// 65_Valid_Number
class Solution
{
public:
    bool isNumber(string s)
    {
        regex numreg("[+-]{0,1}(([0-9]+[\.]{0,1}[0-9]*)|([0-9]*[\.]{0,1}[0-9]+))($|[eE][+-]{0,1}[0-9]+)");

        return regex_match(s, numreg);
    }
};