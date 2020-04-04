//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//class Solution {
//public:
//    //����1���ö�ջ�ķ��� �жϺ�ʱ������ 
//    int longestValidParentheses(string s) {
//        //����ջ
//        vector<int> stack;
//        //��ʼ��һ�� -1 ��ƥ�䵽�� �Ҳ���������ʱ��  ��-1 ȥƥ�� 
//        stack.push_back(-1);
//        //��¼�����Ϣ
//        int max = 0;
//        //����s�ַ���
//        for (int i = 0; i < s.size(); i++)
//        {
//            char Item = s[i];
//            //�����ǰԪ���ǡ�����
//            if (Item == ')')
//            {
//                //����������ƥ�� ����û��ƥ�䵽 ����Ҫ����һ��ֵ���� 
//                stack.pop_back();
//                //�ж�ջ���Ƿ���Ԫ��  �������Ԫ����˵��ƥ�䵽��ֵ
//                if (stack.size() != 0)
//                {
//                    max = max > i - stack.back() ? max : i - stack.back();
//                }
//                //ջ��û��Ԫ��  ˵��û��ƥ�䵽  ����ǰֵ��ջ ���ڼ�¼һ����ɵ��ִ���Ϣ
//                else
//                {
//                    stack.push_back(i);
//                }
//            }
//            //�ǣ� ����ջλ��
//            else
//            {
//                stack.push_back(i);
//            }
//        }
//        return max;
//    }
//    //����2 ��̬�滮 
//    int longestValidParentheses1(string s) {
//        //����һ���б� ����¼
//        vector<int> List;
//        //����һ���� ��ֹ�ж�ʱ���
//        List.push_back(0);
//        //��¼�����Ϣ
//        int max = 0;
//        //����s�ַ���
//        for (int i = 0; i < s.size(); i++)
//        {
//            char Item = s[i];
//            //�����ǰԪ���ǡ�(��
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