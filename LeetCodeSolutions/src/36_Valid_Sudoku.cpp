namespace _36_Valid_Sudoku
{
#include<solution.h>

	// 36_Valid_Sudoku
	class Solution
	{
	public:
		bool isValidSudoku(vector<vector<char>>& board)
		{
			vector<vector<bool>> grids(9, vector<bool>(9, 0));
			vector<vector<bool>> rows(9, vector<bool>(9, 0));
			vector<vector<bool>> cols(9, vector<bool>(9, 0));

			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (board[i][j] == '.')
					{
						continue;
					}

					//Grid Check
					if (grids[(i / 3) * 3 + (j / 3)][board[i][j] - '1'])
					{
						return false;
					}
					else
					{
						grids[(i / 3) * 3 + (j / 3)][board[i][j] - '1'] = 1;
					}

					//Row Check
					if (rows[i][board[i][j] - '1'])
					{
						return false;
					}
					else
					{
						rows[i][board[i][j] - '1'] = 1;
					}

					//Col Check
					if (cols[j][board[i][j] - '1'])
					{
						return false;
					}
					else
					{
						cols[j][board[i][j] - '1'] = 1;
					}

				}
			}

			return true;

		}
	};

}