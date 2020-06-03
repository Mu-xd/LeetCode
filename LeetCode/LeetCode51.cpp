////----------------------------------------------------------
////LeetCode51. N皇后
////n 皇后问题研究的是如何将 n 个皇后放置在 n×n 的棋盘上，并且使皇后彼此之间不能相互攻击。
////给定一个整数 n，返回所有不同的 n 皇后问题的解决方案。
////每一种解法包含一个明确的 n 皇后问题的棋子放置方案，该方案中 'Q' 和 '.' 分别代表了皇后和空位。
////行、列、主对角线、次对角线上的会被皇后攻击
////----------------------------------------------------------
////思路：
////  
////作者：Mxd
////时间：2020/06/02
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//private:
//    int _N;
//    vector<string> map;
//    vector<vector<string>> ans;
//    bool playChess()
//    {
//        return true;
//    }
//public:
//    vector<vector<string>> solveNQueens(int n) {
//        _N = n;
//        map = vector<string>(n,string(n,'.'));
//        for (int i = 0; i < n; i++)
//        {
//            //行
//            map = vector<string>(n, string(n, '.'));
//            map[0] = string(n, 'x');
//            map[0][i] = 'Q';
//            //列
//            for (int j = 1; j < n; j++)
//                map[j][i] = 'x';
//            //主对角线
//            for(int x = i + 1,y = 1;x<n&&y<n;x++,y++)
//                map[y][x] = 'x';
//            //次对角线
//            for (int x = i - 1, y = 1; x >= 0 && y < n; x--, y++)
//                map[y][x] = 'x';
//        }
//        playChess();
//        return vector<vector<string>>();
//    }
//};
//
//int main()
//{
//    while (true)
//    {
//        int n;
//        cin >> n;
//        Solution().solveNQueens(n);
//    }
//}
