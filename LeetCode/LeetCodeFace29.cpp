////----------------------------------------------------------
////LeetCode面试题29. 顺时针打印矩阵
////输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字。
////----------------------------------------------------------
////思路：
////  常规思路
////作者：Mxd
////时间：2020/06/05
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        if (matrix.size() == 0)
//            return {};
//        vector<int> ans;
//        int min_x = 0, min_y = 0;
//        int max_y = matrix.size() - 1, max_x = matrix[0].size() - 1;
//        int x = 0, y = 0;
//        while (min_x < max_x && min_y < max_y)
//        {
//            //右
//            while (x <= max_x)	ans.push_back(matrix[y][x++]);
//            x = max_x;
//            y++;
//            //下
//            while (y <= max_y)  ans.push_back(matrix[y++][x]);
//            y = max_y;
//            x--;
//            //左
//            while (x >= min_x) ans.push_back(matrix[y][x--]);
//            x = min_x;
//            y--;
//            //上
//            while (y > min_y)  ans.push_back(matrix[y--][x]);
//            max_y--;
//            max_x--;
//            y = ++min_y; x = ++min_x;
//        }
//        if (max_y == min_y && max_x == min_x) ans.push_back(matrix[y][x++]);	//剩一个元素
//        else {
//            if (max_y == min_y)	while (x <= max_x) ans.push_back(matrix[y][x++]);	//剩一行
//            if (max_x == min_x)   while (y <= max_y) ans.push_back(matrix[y++][x]);	//剩一列
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<vector<int>> matrix = {
//        {1,2,},
//        {5,6,},
//        {9,10},
//    };
//    Solution().spiralOrder(matrix);
//}