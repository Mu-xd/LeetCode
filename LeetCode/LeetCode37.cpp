/////
//未完成
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	void solveSudoku(vector<vector<char>>& board) {
//		bool row[9][9] = {false};
//		bool col[9][9] = {false};
//		bool Subsudoku[9][9] = { false };
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				if (board[i][j] == '.')
//					continue;
//				row[i][board[i][j] - '1'] = 1;
//				col[j][board[i][j] - '1'] = 1;
//				Subsudoku[(i / 3) * 3 + j / 3][board[i][j]] = 1;
//			}
//		}
//		//FillNum(board, row, col, Subsudoku, 0, 0);
//	}
//private:
//	bool FillNum(vector<vector<char>>& board, bool row[][9], bool col[][9], bool Subsudoku[][9],
//		int x,int y)
//	{
//		try {
//			//结束条件
//			if (x == board.size())
//			{
//				x = 0;
//				y++;
//				if (y == board.size())
//					return true;
//			}
//			//找到board 中可以填入的数字
//			if (board[y][x] == '.')
//			{
//				for (int i = 0; i < 9; i++)
//				{
//					bool flag = !(row[y][i] || col[x][i] || Subsudoku[(y / 3) * 3 + x / 3][i]);
//					if (flag)
//					{
//						if ((y / 3) * 3 + x / 3 > 8)
//							auto f = 0;
//						row[y][i] = true;
//						col[x][i] = true;
//						Subsudoku[(y / 3) * 3 + x / 3][i] = true;
//						board[y][x] = i + '1';
//						if (FillNum(board, row, col, Subsudoku, ++x, y))
//							return true;
//						row[y][i] = false;
//						col[x][i] = false;
//						Subsudoku[(y / 3) * 3 + x / 3][i] = false;
//						board[y][x] = '.';
//					}
//				}
//			}
//			else//找下一个
//				return FillNum(board, row, col, Subsudoku, ++x, y);
//			return false;
//		}
//		catch (...)
//		{
//			throw;
//		}
//	}
//};
//int main()
//{
//	vector<vector<char>> board = {
//		{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
//		{'6', '.', '.', '1', '9', '5', '.', '.', '.'},
//		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
//		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
//		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
//		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//		{'.', '.', '.', '.', '8', '.', '.', '7', '9'},
//	};
//	Solution S;
//	S.solveSudoku(board);
//}