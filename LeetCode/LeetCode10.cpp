//#include <iostream>
//#include <string>
//using namespace std;
//class Solution {
//public:
//    //�ö�̬�滮�ķ��� 
//    //��������ķ���ȥ��������
//    //��*�ֽ�Ϊ���� ÿ�ο��������Ǻź�ƥ��һ���ַ� ��������зֽ�
//    //ÿһ���õ���ƥ�����ݺ���һ�������ݽ����ۺ��жϵó���ǰ�������Ϣ
//    bool isMatch1(string s, string p) {
//        try {
//            return doMatch(s, 0, p, 0);
//        }
//        catch (...)
//        {
//            cout<< "catch (...)" << endl;
//        }
//    }
//private:
//    bool doMatch(const string& s, int sIndex, const string& p, int pIndex)
//    {
//        //�ж�ƥ����� ���p�ַ��������s�ַ������ �����
//        if (p.length() <= pIndex) return s.length() <= sIndex;
//        //���ģʽ��ƥ����� ��ʧ�� �����ж��Ƿ����ƥ��
//        bool currentMatch = sIndex < s.length() && (s[sIndex] == p[pIndex] || p[pIndex] == '.');
//        //�ж���һ���ǲ���*
//        if (pIndex + 1 < p.length() && p[pIndex + 1] == '*')
//        {
//            return doMatch(s, sIndex, p, pIndex + 2) || (currentMatch && doMatch(s, sIndex + 1, p, pIndex));
//        }
//        else
//        {
//            //����ƥ��ɹ�������һ��Ҳƥ��ɹ�
//            return currentMatch && doMatch(s, sIndex + 1, p, pIndex+1);
//        }
//    }
//};
//int main()
//{
//    string a = "aaa";
//    string b = "a*a";
//    Solution s;
//    cout << s.isMatch1(a, b);
//}