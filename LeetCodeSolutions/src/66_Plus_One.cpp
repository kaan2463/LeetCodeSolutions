// 66_Plus_One
class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            digits[i] += 1;
            if (digits[i] / 10 == 1)
            {
                digits[i] %= 10;
            }
            else
            {
                return digits;
            }
        }
        if (digits[0] / 10 == 1)
        {
            digits[0] %= 10;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};