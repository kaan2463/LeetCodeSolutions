// 2125_Number_of_Laser_Beams_in_a_Bank
class Solution
{
public:
    int numberOfBeams(vector<string>& bank)
    {
        int sum = 0;
        int count = 0;
        int prev = 0;
        for (int i = 0; i < bank.size(); i++)
        {
            count = 0;
            for (int j = 0; j < bank[i].size(); j++)
            {
                if (bank[i].at(j) == '1')
                {
                    count++;
                }
            }
            if (count > 0)
            {
                sum += prev * count;
                prev = count;
            }
        }
        return sum;
    }
};