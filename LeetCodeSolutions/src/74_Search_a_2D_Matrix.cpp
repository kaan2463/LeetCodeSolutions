namespace _74_Search_a_2D_Matrix
{
#include<solution.h>

    // 74_Search_a_2D_Matrix
    class Solution
    {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target)
        {
            int sz1, sz2;
            sz1 = matrix.size();
            sz2 = matrix[0].size();
            if (sz1 == 1)
            {
                for (int j = 0; j < sz2; j++)
                {
                    if (matrix[0][j] == target)
                    {
                        return true;
                    }

                }
            }
            else
            {
                for (int i = 0; i < sz1; i++)
                {

                    if (matrix[i][0] > target)
                    {

                        for (int j = 0; j < sz2; j++)
                        {
                            if (i - 1 < 0)
                            {
                                return false;
                            }
                            if (matrix[i - 1][j] == target)
                            {
                                return true;
                            }

                        }
                    }

                }
                if (sz1 < 1)
                {
                    return false;
                }
                for (int j = 0; j < sz2; j++)
                {

                    if (matrix[sz1 - 1][j] == target)
                    {
                        return true;
                    }

                }
            }
            return false;
        }
    };

}