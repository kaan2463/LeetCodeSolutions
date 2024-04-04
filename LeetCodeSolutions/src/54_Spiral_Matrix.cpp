// 54_Spiral_Matrix
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int> v;

        if (matrix.empty())
        {
            return v;
        }

        int m = matrix.size();
        int n = matrix[0].size();



        if (m == 1 && n == 1)
        {
            v.push_back(matrix[0][0]);
            return v;
        }


        if (m == 1)
        {
            return matrix[0];
        }

        if (n == 1)
        {
            for (int i = 0; i < m; i++)
            {
                v.push_back(matrix[i][0]);
            }
            return v;
        }

        int count = 0;
        int nStep = 0;
        int depth = 0;
        int i = 0;
        int j = 0;
        while (count < m * n)
        {
            nStep = m == n && m - 2 * depth == 1 ? 1 : (m + n) * 2 - 4 * (1 + 2 * depth);
            i = depth;
            j = depth;
            for (int k = 0; k < nStep && count < m * n; k++)
            {
                v.push_back(matrix[i][j]);
                if (k < n - 2 * depth - 1)
                {
                    j++;
                }
                else if (k >= n - 2 * depth - 1 && k < n - 2 * depth - 1 + m - 2 * depth - 1)
                {
                    i++;
                }
                else if (k >= k < n - 2 * depth - 1 + m - 2 * depth - 1 && k < n - 2 * depth - 1 + m - 2 * depth - 1 + n - 2 * depth - 1)
                {
                    j--;
                }
                else
                {
                    i--;
                }

                count++;
            }
            depth++;
        }
        return v;
    }
};