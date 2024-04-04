// 1582_Special_Positions_in_a_Binary_Matrix
class Solution
{
public:
    int numSpecial(vector<vector<int>>& mat)
    {
        if (mat.empty())
        {
            return 0;
        }
        vector<int> rowVec(mat.size(), 0);
        vector<int> colVec(mat[0].size(), 0);

        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j])
                {
                    rowVec[i]++;
                    colVec[j]++;
                }
            }
        }
        int count = 0;

        for (int i = 0; i < mat.size(); i++)
        {
            if (rowVec[i] != 1)
            {
                continue;
            }
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] && colVec[j] == 1)
                {
                    count++;
                }
            }
        }

        return count;
    }
};