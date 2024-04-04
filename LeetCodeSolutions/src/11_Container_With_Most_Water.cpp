// 11_Container_With_Most_Water
class Solution
{
public:
    int max(int a, int b)
    {
        return a > b ? a : b;
    }
    int min(int a, int b)
    {
        return a < b ? a : b;
    }

    int maxArea(vector<int>& height)
    {

        int iMax = 0;
        int jMax = 0;
        int maxArea = 0;
        for (int i = 0; i < height.size(); i++)
        {
            if (iMax > height[i])
            {
                continue;
            }
            iMax = height[i];
            jMax = 0;
            for (int j = height.size() - 1; i < j; j--)
            {
                if (jMax > height[j])
                {
                    continue;
                }
                jMax = height[j];
                maxArea = max((j - i) * min(iMax, jMax), maxArea);
            }
        }

        return maxArea;
    }
};