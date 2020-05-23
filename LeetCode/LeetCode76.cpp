//#include<iostream>
//#include<map>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    string minWindow(string s, string t) {
//        map<char,int> ms;
//        int len = s.size(), l_index = 0;
//        for (int i = 0; i < t.size(); i++)
//        {
//            ms[t[i]]++;
//        }
//        //两个指针设置滑动窗口
//        int j = 0,j1 = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            //这个字符是需要的字符
//            if (ms.find(s[i]) != ms.end())
//            {
//                j1 = i;
//                ms[s[j1]]--;
//                int k = 0;
//                for (auto x: ms)
//                {
//                    if (x.second > 0)
//                        break;
//                    k++;
//                }
//                if (k < ms.size())
//                    continue;
//                for (;j < j1; j++)
//                {
//                    if (ms.find(s[j]) != ms.end())
//                    {
//                        if (ms[s[j]] == 0)
//                            break;
//                        else
//                        {
//                            ms[s[j]]++;
//                        }
//                    }
//                };
//                if (j1 - j < len)
//                {
//                    l_index = j;
//                    len = j1 - j;
//                }
//            }
//        }
//        for (auto x : ms)
//        {
//            if (x.second > 0)
//                return "";
//        }
//        return s.substr(l_index,len + 1);
//    }
//};
//
//int main()
//{
//    while (true)
//    {
//        string s = "";
//        cout << "输入S:" << endl;
//        cin >> s;
//        string t = "";
//        cout << "输入T:" << endl;
//        cin >> t;
//        Solution S;
//        cout << S.minWindow(s, t) << endl;
//    }
//}
//
