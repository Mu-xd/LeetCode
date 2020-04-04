//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//class Solution {
//public:
//    //方法1利用堆栈的方法 判断何时不成立 
//    int longestValidParentheses(string s) {
//        //建立栈
//        vector<int> stack;
//        //初始化一个 -1 当匹配到） 且不是连续的时候  用-1 去匹配 
//        stack.push_back(-1);
//        //记录最长的信息
//        int max = 0;
//        //遍历s字符串
//        for (int i = 0; i < s.size(); i++)
//        {
//            char Item = s[i];
//            //如果当前元素是‘）’
//            if (Item == ')')
//            {
//                //无论是正常匹配 还是没有匹配到 都需要将第一个值弹出 
//                stack.pop_back();
//                //判断栈顶是否还有元素  如果还有元素则说明匹配到了值
//                if (stack.size() != 0)
//                {
//                    max = max > i - stack.back() ? max : i - stack.back();
//                }
//                //栈顶没有元素  说明没有匹配到  将当前值入栈 用于记录一个完成的字串信息
//                else
//                {
//                    stack.push_back(i);
//                }
//            }
//            //是（ 则入栈位置
//            else
//            {
//                stack.push_back(i);
//            }
//        }
//        return max;
//    }
//    //方法2 动态规划 
//    int longestValidParentheses1(string s) {
//        //建立一个列表 备忘录
//        vector<int> List;
//        //增加一个数 防止判断时溢出
//        List.push_back(0);
//        //记录最长的信息
//        int max = 0;
//        //遍历s字符串
//        for (int i = 0; i < s.size(); i++)
//        {
//            char Item = s[i];
//            //如果当前元素是‘(’
//            if (Item == '(')
//            {
//                List.push_back(0);
//            }
//            else
//            {
//                if (i > 0 && s[i - 1] == '(')
//                    List.push_back(List[i - 1] + 2);
//                else if (i - List[i] > 0 && s[i - 1] == ')' && s[i - List[i] - 1] == '(')
//                    List.push_back(List[i - List[i] - 1] + List[i] + 2);
//                else
//                    List.push_back(0);
//                max = max > List.back() ? max : List.back();
//            }
//        }
//        return max;
//    }
//};
//int main()
//{
//    string s = "())";
//    Solution solution;
//
//    std::cout << solution.longestValidParentheses1(s);
//    ;
//}