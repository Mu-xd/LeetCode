//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
////最长回文子串
//class Solution {
//public:
//    //动态规划解法 分解为i到j是否为回文串
//    string longestPalindrome(string s) {
//        //初始化一个表用于记录从i到j的子串是否是回文串
//        vector<vector<bool>> res_tab(s.length(), vector<bool>(s.length(), false));
//        //用于记录结果信息
//        int maxlen = 0, start = 0, end = 0;
//		  //这里一定先遍历长度 先解决了 所有小长度的再查大长度的东西
//        //第一层遍历的是长度  按照长度从小到大来寻找结果
//        for (int len = 1; len <= s.length(); len++)
//        {
//            //第二层遍历的是起始位置  按照起始位置和长度 确定终止位置
//            for (int i = 0; i <= s.length() - len; i++)
//            {
//                //终止位置的编号
//                int j = len - 1 + i;
//                if (s[i] == s[j] )
//                {
//                    //一个字符或者两个字符的情况
//                    if (i == j || i == j - 1)
//                        res_tab[i][j] = true;
//                    //多个字符的情况
//                    else
//                        res_tab[i][j] = res_tab[i + 1][j - 1];
//                    //更新新的最长信息
//                    if (res_tab[i][j] && len > maxlen)
//                    {
//                        maxlen = len;
//                        start = i;
//                        end = j;
//                    }
//                }
//            }
//        }
//        return s.substr(start, maxlen);
//    }
//};
//int main()
//{
//    string a = "abcda";
//    Solution ss;
//    std::cout << ss.longestPalindrome(a);
//    ;
//}