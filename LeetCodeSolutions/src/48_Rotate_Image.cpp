namespace _48_Rotate_Image
{
#include<solution.h>

    // 48_Rotate_Image
    class Solution
    {
    public:
        void rotate(vector<vector<int>>& matrix)
        {
            int n = matrix.size();
            int temp = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n / 2; j++)
                {
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[i][n - 1 - j];
                    matrix[i][n - 1 - j] = temp;
                }
            }

        }
    };

}