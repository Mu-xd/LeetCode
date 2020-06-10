////----------------------------------------------------------
////LeetCode9. 回文数
////判断一个整数是否是回文数。
////回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
////思路：
////	常规思路
////作者：Mxd
////时间：2020/06/10
////-----------------------------------------------------------
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if (x < 0)
//            return false;
//        //这里需要考虑数据类型防止溢出
//        int64_t f = 1;
//        int64_t num = 0;
//        while (f <= x)
//        {
//            num = num * 10 + (x % (f * 10)) / f;
//            f *= 10;
//        }
//        return num == x;
//    }
//	bool isPalindrome_string(int x) {
//		if (x < 0)//小于0 一定不是回文数
//			return false;
//		auto str = to_string(x);
//		int num = 0;
//		if (str.size() % 2 == 1)//奇数个数字
//		{
//			num = (str.size() - 1) / 2;
//		}
//		else//偶数个数字
//		{
//			num = str.size() / 2;
//		}
//		for (int i = 0; i < num; i++)
//		{
//			if (str[i] != str[str.length() - 1 - i])
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//};
//int main()
//{
//    while (true)
//    {
//        int x;
//        cin >> x;
//        cout << Solution().isPalindrome(x) << endl;
//    }
//}