////----------------------------------------------------------
////LeetCode50. Pow(x, n)
////ʵ�� pow(x, n) �������� x �� n ���ݺ�����
////----------------------------------------------------------
////˼·��
////  ����������ʱ�������η��������ݣ�
////���ߣ�Mxd
////ʱ�䣺2020/06/02
////-----------------------------------------------------------
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    //�����ⷨ
//    double myPow1(double x, int n) {
//
//        double ans = 1;
//        long long n1 = n < 0 ? n * -1 : n; //��ֹ����Խ��
//        for (long long i = 1; i <= n1; i++)
//        {
//            ans *= x;
//        }
//        return n>0? ans:1/ans;
//    }
//    //������/���η�
//    double myPow(double x, int n) {
//        long long N = n < 0 ? n * -1 : n; //��ֹ����Խ��
//        double ans = ffffff(x, N);
//        return n > 0 ? ans : 1 / ans;
//    }
//    double ffffff(double x, long long n)
//    {
//        double ans = 1;
//        if (n == 0) return 1;
//        if (n == 1) return x;
//        if (n % 2 == 1) { n--; ans *= x; }
//        double x = ffffff(x, n / 2);
//        ans *= x * x;
//        return ans;
//    }
//};
//
//int main()
//{
//    while (true)
//    {
//        double x;
//        int n;
//        cin >> x >> n;
//        cout << Solution().myPow(x, n) << endl;
//    }
//}