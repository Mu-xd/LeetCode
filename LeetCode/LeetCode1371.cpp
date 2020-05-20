//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//    int findTheLongestSubstring(string s) {
//        vector<int> pos(1<<5,-1);//存 第i个状态的 位置
//        pos[0] = 0;
//        vector<char> chars = {'a','e','i','o','u'};
//        int maxl = 0;
//        int state = 0; //0的时候是 偶数 其他是奇数
//        //偶数的话 直接记录
//        for (int i = 0; i < s.size(); i++)
//        {
//            for (int j = 0; j < chars.size(); j++)
//            {
//                if (s[i] == chars[j])
//                {
//                    state ^= 1 << j;
//                    break;
//                }
//            }
//            //states.push_back(state);
//            //只存储奇数第一次出现的值 这样才能让奇数-奇数达到最大
//            if (pos[state] == -1) // 这里是一个奇数
//                pos[state] = i + 1;
//            else//这个出现过一次就可以用相减来比较更新最大值
//                maxl = max(maxl, i + 1 - pos[state]);
//        }
//        return maxl;
//    }
//};
//
//int main()
//{
//    while (true)
//    {
//        string s;
//        cin >> s;
//        Solution S;
//        cout << S.findTheLongestSubstring(s) << endl;
//    }
//}