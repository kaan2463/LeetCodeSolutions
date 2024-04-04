// 167_Two_Sum_II_-_Input_Array_Is_Sorted
class Solution
{
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        vector<int> v;
        int min = numbers[0];
        int max = numbers[numbers.size() - 1];
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] > target - min)
            {
                break;
            }
            if (i + 1 < numbers.size() && numbers[i + 1] == numbers[i] && numbers[i + 1] + numbers[i] != target)
            {
                continue;
            }
            for (int j = i + 1; j < numbers.size(); j++)
            {
                if (numbers[j] > target - min)
                {
                    break;
                }
                if (target == (numbers[i] + numbers[j]))
                {
                    v.push_back(i + 1);
                    v.push_back(j + 1);
                    return v;
                }
            }
        }

        return v;
    }
};