////----------------------------------------------------------
////LeetCode128. ���������
////����һ��δ������������飬�ҳ���������еĳ��ȡ�
////Ҫ���㷨��ʱ�临�Ӷ�Ϊ O(n)��
////˼·��
////  map(������)/���鼯��δʵ�֣�
////���ߣ�Mxd
////ʱ�䣺2020/06/06
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include <map>
//using namespace std;
//
//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        if (nums.size() == 0)
//            return 0;
//        map<int, int> map_res;
//        int lan = 1;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            map_res[nums[i]] = 1;
//        }
//        auto end = --map_res.end();
//        for (auto item = map_res.begin(); item != end;)
//        {
//            int l = item->second;
//            if (item->first + 1 == (++item)->first)
//            {
//                item->second = l + 1;
//                lan = item->second > lan ? item->second : lan;
//            }
//        }
//
//        return lan;
//    }
//};
//int main()
//{
//    vector<int> nums = { 0 };
//    cout << Solution().longestConsecutive(nums) << endl;
//}
