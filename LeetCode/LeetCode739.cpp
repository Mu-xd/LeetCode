////----------------------------------------------------------
////LeetCode739. 每日温度
////根据每日 气温 列表，请重新生成一个列表，
////对应位置的输出是需要再等待多久温度才会升高超过该日的天数。
////如果之后都不会升高，请在该位置用 0 来代替。
////例如，给定一个列表 temperatures = [73, 74, 75, 71, 69, 72, 76, 73]，
////你的输出应该是 [1, 1, 4, 2, 1, 1, 0, 0]。
////提示：气温 列表长度的范围是 [1, 30000]。
////每个气温的值的均为华氏度，都是在 [30, 100] 范围内的整数。
////----------------------------------------------------------
////思路：
////  单调栈
////作者：Mxd
////时间：2020/06/11
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<stack> 
//using namespace std;
//
//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& T) {
//        stack<int> mystack;
//        //这里很巧妙的利用了初值 当栈中有没处理的元素时就为0
//        vector<int> ans(T.size(),0); 
//        for (int i = 0; i < T.size() - 1; i++)
//        {
//            //这里要防止溢出 栈空的情况
//            while(mystack.size() != 0 && T[i] > T[mystack.top()])
//            {
//                ans[mystack.top()] = i - mystack.top();
//                mystack.pop();
//            }
//            mystack.push(i);
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<int> T = { 73, 74, 75, 71, 69, 72, 76, 73 };
//    Solution().dailyTemperatures(T);
//}