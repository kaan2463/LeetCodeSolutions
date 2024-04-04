// 1441_Build_an_Array_With_Stack_Operations
class Solution
{
public:
    vector<string> buildArray(vector<int>& target, int n)
    {
        vector<string> vs;
        int index = 0;
        for (int i = 0; i < n && index < target.size(); i++)
        {
            vs.push_back("Push");
            if (target[index] == i + 1)
            {
                index++;
                continue;
            }
            vs.push_back("Pop");
        }
        return vs;
    }
};