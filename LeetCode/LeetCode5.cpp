//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
////������Ӵ�
//class Solution {
//public:
//    //��̬�滮�ⷨ �ֽ�Ϊi��j�Ƿ�Ϊ���Ĵ�
//    string longestPalindrome(string s) {
//        //��ʼ��һ�������ڼ�¼��i��j���Ӵ��Ƿ��ǻ��Ĵ�
//        vector<vector<bool>> res_tab(s.length(), vector<bool>(s.length(), false));
//        //���ڼ�¼�����Ϣ
//        int maxlen = 0, start = 0, end = 0;
//		  //����һ���ȱ������� �Ƚ���� ����С���ȵ��ٲ�󳤶ȵĶ���
//        //��һ��������ǳ���  ���ճ��ȴ�С������Ѱ�ҽ��
//        for (int len = 1; len <= s.length(); len++)
//        {
//            //�ڶ������������ʼλ��  ������ʼλ�úͳ��� ȷ����ֹλ��
//            for (int i = 0; i <= s.length() - len; i++)
//            {
//                //��ֹλ�õı��
//                int j = len - 1 + i;
//                if (s[i] == s[j] )
//                {
//                    //һ���ַ����������ַ������
//                    if (i == j || i == j - 1)
//                        res_tab[i][j] = true;
//                    //����ַ������
//                    else
//                        res_tab[i][j] = res_tab[i + 1][j - 1];
//                    //�����µ����Ϣ
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