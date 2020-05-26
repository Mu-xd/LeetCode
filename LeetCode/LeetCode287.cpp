////----------------------------------------------------------
////LeetCode287 寻找重复数
////给定一个包含 n + 1 个整数的数组 nums，其数字都在 1 到 n 之间（包括 1 和 n），
////可知至少存在一个重复的整数。假设只有一个重复的整数，找出这个重复的数。
////不能更改原数组（假设数组是只读的）。
////只能使用额外的 O(1) 的空间。
////时间复杂度小于 O(n2) 。
////数组中只有一个重复的数字，但它可能不止重复出现一次。
////思路：
////  1、二分法：不是对数组nums 进行二分 而是对1-n的序列进行二分 判断数组的逻辑条件与中间点的关系
////      时间复杂度O（nlogn）、空间复杂度O（1）
////  2、转换为非典型的找换问题：然后利用弗洛伊德判环方式 （快慢指针）
////作者：Mxd
////时间：2020/05/24
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    //二分法
//    int findDuplicate(vector<int>& nums) {
//        int l = 0, r = (nums.size() - 1);
//        int mid ;
//        int ans = -1;
//        while (l < r)
//        {
//            mid = (r + l) / 2;
//            int c = 0;
//            for (auto item : nums)
//                c += (item <= mid);
//            if (c > mid)  //在 l 到 mid 中
//            {
//                r = mid - 1;
//                ans = mid;
//            }
//            else
//                l = mid + 1;
//        }
//        return ans;
//    }
//};
//int main()
//{
//    vector<int> nums = { 1,3,4,2,2 };
//    Solution S;
//    cout << S.findDuplicate(nums) << endl;
//}