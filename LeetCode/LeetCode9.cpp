////----------------------------------------------------------
////LeetCode9. ������
////�ж�һ�������Ƿ��ǻ�������
////��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
////˼·��
////	����˼·
////���ߣ�Mxd
////ʱ�䣺2020/06/10
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
//        //������Ҫ�����������ͷ�ֹ���
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
//		if (x < 0)//С��0 һ�����ǻ�����
//			return false;
//		auto str = to_string(x);
//		int num = 0;
//		if (str.size() % 2 == 1)//����������
//		{
//			num = (str.size() - 1) / 2;
//		}
//		else//ż��������
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