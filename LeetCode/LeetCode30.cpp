//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//class Solution {
//public:
//    vector<int> findSubstring(string s, vector<string>& words) {
//        if (words.size() == 0)
//            return vector<int>();
//        //定义一个哈希表 用于存储words 中的词
//        unordered_map<string, int> map1;
//        //另一个哈希表 用于存储 s中匹配的串 
//        unordered_map<string, int> map2;
//        //用于记录结果
//        vector<int> res;
//        //将words存储到哈希表中 并且其值是出现的次数
//        for (string Item : words)
//        {
//            map1[Item]++;
//            //cout << Item << ":" << map1[Item] << endl;
//        }
//        //记录单词长度
//        int len = words[0].size();
//        //记录全部words -1的长度
//        int all_len = len * (words.size() - 1);
//        //用滑动窗口的方法 遍历s字符串 
//        for (int i = 0; i < s.size() - all_len;i++)
//        {
//            ;            //从第i个字符开始建立一个滑动窗口
//            for (int j = 0; j < words.size(); j++)
//            {
//                string str = s.substr(i + j * len, len);
//                //判断这一段是否可以匹配到word
//                if (map1.find(str) != map1.end())
//                {
//                    map2[str]++;
//                    //判断完全匹配到了
//                    if (map2 == map1)
//                    {
//                        res.push_back(i);
//                        map2 = unordered_map<string, int>();
//                    }
//                    //当前匹配到的字符已经超过了模式的数量
//                    //就认为匹配失败 从头开始匹配
//                    if (map2[str] > map1[str])
//                    {
//                        map2 = unordered_map<string, int>();
//                    }
//                }
//                else
//                {
//                    map2 = unordered_map<string, int>();
//                    break;
//                }
//            }
//        }
//        return res;
//    }
//};
//int main()
//{
//    vector<string> words({ "ab", "ba", "ab", "ba" });
//    string s("abaababbaba");
//    Solution ss;
//    vector<int> res = ss.findSubstring(s, words);
//    for (int i : res)
//    {
//        cout << i<<",";
//    }
//    
//}