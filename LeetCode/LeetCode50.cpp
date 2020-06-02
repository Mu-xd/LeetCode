////----------------------------------------------------------
////LeetCode50. Pow(x, n)
////实现 pow(x, n) ，即计算 x 的 n 次幂函数。
////----------------------------------------------------------
////思路：
////  暴力法（超时）、分治法（快速幂）
////作者：Mxd
////时间：2020/06/02
////-----------------------------------------------------------
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    //暴力解法
//    double myPow1(double x, int n) {
//
//        double ans = 1;
//        long long n1 = n < 0 ? n * -1 : n; //防止负数越界
//        for (long long i = 1; i <= n1; i++)
//        {
//            ans *= x;
//        }
//        return n>0? ans:1/ans;
//    }
//    //快速幂/分治法
//    double myPow(double x, int n) {
//        long long N = n < 0 ? n * -1 : n; //防止负数越界
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