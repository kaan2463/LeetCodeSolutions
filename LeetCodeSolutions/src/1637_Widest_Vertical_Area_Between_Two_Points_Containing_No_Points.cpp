// 1637_Widest_Vertical_Area_Between_Two_Points_Containing_No_Points
class Solution
{
public:

    int maxWidthOfVerticalArea(vector<vector<int>>& points)
    {

        int max = 0;

        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) { return a[0] < b[0]; });

        for (int i = 1; i < points.size(); i++)
        {
            if (max < points[i][0] - points[i - 1][0])
            {
                max = points[i][0] - points[i - 1][0];
            }
        }

        return max;
    }
};