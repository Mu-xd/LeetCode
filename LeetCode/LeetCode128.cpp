////----------------------------------------------------------
////LeetCode128. 最长连续序列
////给定一个未排序的整数数组，找出最长连续序列的长度。
////要求算法的时间复杂度为 O(n)。
////思路：
////  map(有序性)/并查集（未实现）
////作者：Mxd
////时间：2020/06/06
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
