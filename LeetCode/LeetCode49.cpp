////-----------------------------------------------------------
////LeetCode49. ��ĸ��λ�ʷ���
////����һ���ַ������飬����ĸ��λ�������һ����ĸ��λ��ָ��ĸ��ͬ�������в�ͬ���ַ�����
////-----------------------------------------------------------
////˼·�����ù�ϣ�������
////���ߣ�Mxd
////ʱ�䣺2020/05/28
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