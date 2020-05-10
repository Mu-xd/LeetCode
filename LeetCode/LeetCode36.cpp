//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	bool isValidSudoku(vector<vector<char>>& board) {
//		int row[9][9] = {0};
//		int col[9][9] = {0};
//		int Subsudoku[9][9] = { 0 };
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				if (board[i][j] == '.')
//					continue;
//				if (row[i][board[i][j] - '1'] == 1)
//					return false;
//				else
//					row[i][board[i][j] - '1'] = 1;
//				if (col[j][board[i][j] - '1'] == 1)
//					return false;
//				else
//					col[j][board[i][j] - '1'] = 1;
//				if(Subsudoku[(i / 3) * 3 + j / 3][board[i][j] - '1'] == 1)
//					return false;
//				else
//					Subsudoku[(i / 3) * 3 + j / 3][board[i][j]] = 1;
//			}
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	vector<vector<char>> board = {

//		{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
//		{'6', '.', '.', '1', '9', '5', '.', '.', '.'},
//		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//		{'8','.','.','.','6','.','.','.','3'},
//		{'4','.','.','8','.','3','.','.','1'},
//		{'7','.','.','.','2','.','.','.','6'},
//		{'.','6','.','.','.','.','2','8','.'},
//		{'.','.','.','4','1','9','.','.','5'},
//		{'.','.','.','.','8','.','.','7','9'},
//	};
//	Solution S;
//	cout<< S.isValidSudoku(board);
//}