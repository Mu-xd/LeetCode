////----------------------------------------------------------
////LeetCode837. 新21点
////爱丽丝参与一个大致基于纸牌游戏 “21点” 规则的游戏，描述如下：
////爱丽丝以 0 分开始，并在她的得分少于 K 分时抽取数字。 
////抽取时，她从[1, W] 的范围中随机获得一个整数作为分数进行累计，其中 W 是整数。
////每次抽取都是独立的，其结果具有相同的概率。
////当爱丽丝获得不少于 K 分时，她就停止抽取数字。 爱丽丝的分数不超过 N 的概率是多少？
////----------------------------------------------------------
////思路：
////	动态规划 + 反序
////作者：Mxd
////时间：2020/06/03
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    double new21Game(int N, int K, int W) {
//        vector<double> num;
//        double sum = (N - K + 1) > W ? W : (N - K + 1);
//        for (int i = W - 1; i >= 0; i--)
//        {
//            num.push_back(K + i <= N ? 1 : 0);
//        }
//        for (int i = 0; i < K; i++)
//        {
//            num.push_back(1.0 / W * sum); //插入操作比push_back 费时 push_back 比赋值费时
//            sum -= num[num.size() - W - 1];
//            sum += num[num.size() - 1];
//        }
//        return num[num.size() - 1];
//    }
//};
//
//int main()
//{
//    while (true)
//    {
//        int K, N, W;
//        cout << "K：";
//        cin >> K;
//        cout << "N：";
//        cin >> N;
//        cout << "W：";
//        cin >> W;
//        cout <<"S:"<< Solution().new21Game(N, K, W) << endl;
//    }
//}