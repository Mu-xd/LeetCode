////-----------------------------------------------------------
////LeetCode49. 字母异位词分组
////给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串。
////-----------------------------------------------------------
////思路：利用哈希表的特性
////作者：Mxd
////时间：2020/05/28
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<map>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        map<map<char, int>, vector<string>> ans;
//        for (auto shr : strs)
//        {
//            map<char, int> chars;
//            for (auto ch : shr)
//            {
//                chars[ch]++;
//            }
//            ans[chars].push_back(shr);
//        }
//        vector<vector<string>> res;
//        for (auto item : ans)
//        {
//            res.push_back(item.second);
//        }
//        return res;
//    }
//};
//
//int main()
//{
//    vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
//    Solution().groupAnagrams(strs);
//}