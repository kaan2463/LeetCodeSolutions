namespace _661_Image_Smoother
{
#include<solution.h>

    // 661_Image_Smoother
    class Solution
    {
    public:
        vector<vector<int>> imageSmoother(vector<vector<int>>& img)
        {
            vector<vector<int>> s;

            int m = img.size();
            int n = img[0].size();

            int k_lower, k_upper, l_lower, l_upper;
            int count = 0;
            int sum = 0;
            for (int i = 0; i < m; i++)
            {
                vector<int> v;
                for (int j = 0; j < n; j++)
                {
                    k_lower = i < 1 ? 0 : i - 1;
                    k_upper = (i + 2) > m ? m : i + 2;
                    l_lower = j < 1 ? 0 : j - 1;
                    l_upper = (j + 2) > n ? n : j + 2;
                    count = 0;
                    sum = 0;
                    for (int k = k_lower; k < k_upper; k++)
                    {
                        for (int l = l_lower; l < l_upper; l++)
                        {
                            sum += img[k][l];
                            count++;
                        }
                    }
                    v.push_back(sum / count);
                }
                s.push_back(v);
            }
            return s;
        }
    };

}