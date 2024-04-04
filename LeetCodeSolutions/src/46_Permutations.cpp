// 46_Permutations
class Solution
{
public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> v;
        vector<int> perm;
        permute1(nums, perm, v);
        return v;
    }

    void permute1(vector<int> nums, vector<int> perm, vector<vector<int>>& v)
    {
        if (nums.empty())
        {
            v.push_back(perm);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> newPerm = perm;
            newPerm.push_back(nums[i]);
            vector<int> newNums = nums;
            newNums.erase(newNums.begin() + i);
            permute1(newNums, newPerm, v);
        }
    }
};