////----------------------------------------------------------
////LeetCode983. 最低票价
////在一个火车旅行很受欢迎的国度，你提前一年计划了一些火车旅行。在接下来的一年里，
////你要旅行的日子将以一个名为 days 的数组给出。每一项是一个从 1 到 365 的整数。
////火车票有三种不同的销售方式：
////一张为期一天的通行证售价为 costs[0] 美元；
////一张为期七天的通行证售价为 costs[1] 美元；
////一张为期三十天的通行证售价为 costs[2] 美元。
////通行证允许数天无限制的旅行。 例如，如果我们在第 2 天获得一张为期 7 天的通行证，
////那么我们可以连着旅行 7 天：第 2 天、第 3 天、第 4 天、第 5 天、第 6 天、第 7 天和第 8 天。
////返回你想要完成在给定的列表 days 中列出的每一天的旅行所需要的最低消费。
////----------------------------------------------------------
////思路：
////	动态规划
////作者：Mxd
////时间：2020/06/03
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int mincostTickets(vector<int>& days, vector<int>& costs) {
//        int lastday = days[days.size() - 1];
//        vector<int> dp = { 0 };
//        int j = 0;
//        for (int i = 1; i <= lastday; i++)
//        {
//            //这一天要去旅行
//            if (i == days[j])
//            {
//                int maxs = dp[i - 1] + costs[0];
//                //这里是要判断是不是大于7天 如果大于7天就 i-7 否则按0天算
//                //这里不能直接忽略 0 的情况 因为1天不一定是最小的
//                maxs = min(maxs, dp[i - 7 > 0 ? i - 7 : 0] + costs[1]);
//                maxs = min(maxs, dp[i - 30 > 0 ? i - 30 : 0] + costs[2]);
//                dp.push_back(maxs);
//                j++;
//            }
//            else//不用去旅行
//            {
//                dp.push_back(dp[i - 1]);
//            }
//        }
//        return dp[dp.size() - 1];
//    }
//};
//int main()
//{
//    vector<int> days = {1,4,6,7,8,20};
//    vector<int> costs = { 7,2,15 };
//    cout << Solution().mincostTickets(days, costs);
//}