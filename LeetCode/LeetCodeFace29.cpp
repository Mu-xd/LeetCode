////----------------------------------------------------------
////LeetCode������29. ˳ʱ���ӡ����
////����һ�����󣬰��մ���������˳ʱ���˳�����δ�ӡ��ÿһ�����֡�
////----------------------------------------------------------
////˼·��
////  ����˼·
////���ߣ�Mxd
////ʱ�䣺2020/06/05
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
//            //��
//            while (x <= max_x)	ans.push_back(matrix[y][x++]);
//            x = max_x;
//            y++;
//            //��
//            while (y <= max_y)  ans.push_back(matrix[y++][x]);
//            y = max_y;
//            x--;
//            //��
//            while (x >= min_x) ans.push_back(matrix[y][x--]);
//            x = min_x;
//            y--;
//            //��
//            while (y > min_y)  ans.push_back(matrix[y--][x]);
//            max_y--;
//            max_x--;
//            y = ++min_y; x = ++min_x;
//        }
//        if (max_y == min_y && max_x == min_x) ans.push_back(matrix[y][x++]);	//ʣһ��Ԫ��
//        else {
//            if (max_y == min_y)	while (x <= max_x) ans.push_back(matrix[y][x++]);	//ʣһ��
//            if (max_x == min_x)   while (y <= max_y) ans.push_back(matrix[y++][x]);	//ʣһ��
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