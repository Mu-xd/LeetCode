////----------------------------------------------------------
////LeetCode394 字符串解码
////思路：括号处理（模拟栈） + 递归
////作者：Mxd
////时间：2020/05/28
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class Solution {
//private:
//	string parentheses(string s) {
//		string ans;
//		int b = 0;
//		for (int i = 0; i < s.size(); i++)
//		{
//			//是数字
//			if (s[i] >= '0' && s[i] <= '9')
//			{
//				b = s[i] - '0' + b * 10;
//				continue;
//			}
//			//是括号
//			if (s[i] == '[')
//			{
//				int a = 1;
//				string q;
//				int j = i + 1;
//				for (; j < s.size(); j++)
//				{
//					if (s[j] == '[' || s[j] == ']')
//					{
//						a += s[j] == '[' ? 1 : -1;
//						if (a == 0)
//						{
//							q = this->parentheses(s.substr(i + 1, j - i - 1));
//							a = -1;
//							break;
//						}
//					}
//				}
//				for (int j = 0; j < b; j++)
//				{
//					ans += q;
//				}
//				b = 0;
//				if(a == -1)
//					i = j;
//				continue;
//			}
//			if (s[i] == ']');
//			ans += s[i];
//		}
//		return ans;
//	}
//public:
//	string decodeString(string s) {
//		return this->parentheses(s);
//	}
//};
//int main()
//{
//	while (true)
//	{
//		string s;
//		getline(cin, s);
//		cout << Solution().decodeString(s) << endl;
//	}
//}