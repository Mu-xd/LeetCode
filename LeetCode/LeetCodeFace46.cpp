////----------------------------------------------------------
////LeetCode面试题46. 把数字翻译成字符串
////给定一个数字，我们按照如下规则把它翻译为字符串：0 翻译成 “a” 
////1 翻译成 “b”，……，11 翻译成 “l”，……，25 翻译成 “z”。
////一个数字可能有多个翻译。请编程实现一个函数，用来计算一个数字有多少种不同的翻译方法。
////----------------------------------------------------------
////思路：
////  动态规划 类似斐波那契数列
////作者：Mxd
////时间：2020/06/09
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    //从头到尾和从尾到头没有影响
//    int translateNum(int num) {
//        vector<int> anss;
//        anss.push_back(1);
//        if(num % 100 >= 10 && num%100 <=25)
//            anss.push_back(2);
//        else
//            anss.push_back(1);
//        long f = 100;
//        while (f <= num)
//        {
//            if (num % (f * 10) / (f / 10) >= 10 && num % (f * 10) / (f / 10) <= 25)
//                //排除05 这种的影响所以需要大于10
//                anss.push_back(anss[anss.size() - 1] + anss[anss.size() - 2]);
//            else
//                anss.push_back(anss[anss.size() - 1]);
//            f *= 10;
//        }
//        return anss[anss.size() - 1];
//    }
//};
//
//int main()
//{
//    while (true)
//    {
//        int x;
//        cin >> x;
//        cout << Solution().translateNum(x) << endl;
//    }
//}