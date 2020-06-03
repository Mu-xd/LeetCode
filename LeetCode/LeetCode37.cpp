////----------------------------------------------------------
////LeetCode37. 解数独
////编写一个程序，通过已填充的空格来解决数独问题。
////一个数独的解法需遵循如下规则：
////数字 1 - 9 在每一行只能出现一次。
////数字 1 - 9 在每一列只能出现一次。
////数字 1 - 9 在每一个以粗实线分隔的 3x3 宫内只能出现一次。
////空白格用 '.' 表示。
////----------------------------------------------------------
////思路：
////	回溯
////作者：Mxd
////时间：2020/05/31
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//private:
//	bool row[9][9] = { false };//行出现的
//	bool col[9][9] = { false };//列出现的
//	bool Subsudoku[9][9] = { false };//3*3 出现的
//public:
//	void solveSudoku(vector<vector<char>>& board) {
//
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				if (board[i][j] == '.')
//					continue;
//				row[i][board[i][j] - '1'] = true;
//				col[j][board[i][j] - '1'] = true;
//				Subsudoku[(i / 3) * 3 + j / 3][board[i][j] - '1'] = true;
//			}
//		}
//		FillNum(board, 0, 0);
//	}
//private:
//	bool FillNum(vector<vector<char>>& board,int x,int y)
//	{
//		//结束条件
//		if (x > board.size() - 1) //当前行判断结束
//		{
//			x = 0;
//			y++;
//			if (y > board.size() - 1)//所有判断结束
//				return true;
//		}
//		//找到board 中可以填入的数字
//		if (board[y][x] == '.')
//		{
//			for (int i = 0; i < 9; i++)
//			{
//				//三个数组中有任意一个这个数字填过就不能再填了
//				//没有填过这个数字
//				if (!(row[y][i] || col[x][i] || Subsudoku[(y / 3) * 3 + x / 3][i]))
//				{
//					if ((y / 3) * 3 + x / 3 > 8)
//						auto f = 0;
//					row[y][i] = true;
//					col[x][i] = true;
//					Subsudoku[(y / 3) * 3 + x / 3][i] = true;
//					board[y][x] = i + '1';
//					//判断下一个数字能不能填写
//					if (FillNum(board,1+x, y))
//						//能就返回
//						return true;
//					//回溯
//					row[y][i] = false;
//					col[x][i] = false;
//					Subsudoku[(y / 3) * 3 + x / 3][i] = false;
//					board[y][x] = '.';
//				}
//			}
//		}
//		else//找下一个
//			return FillNum(board, 1+x, y);
//		return false;
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