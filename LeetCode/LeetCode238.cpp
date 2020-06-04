////----------------------------------------------------------
////LeetCode238. 除自身以外数组的乘积
////给你一个长度为n的整数数组 nums其中n>1，返回输出数组 output，
////其中 output[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。
////----------------------------------------------------------
////思路：
////  前缀和+后缀和
////作者：Mxd
////时间：2020/06/04
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        vector<int> ans = { 1 };
//        int x = nums[0];
//        for (int i = 1; i < nums.size(); i++)
//        {
//            ans.push_back(x);
//            x *= nums[i];
//        }
//        x = 1;
//        for (int i = nums.size() - 1; i >= 0; i--)
//        {
//            ans[i] *= x;
//            x *= nums[i];
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<int> nums = { 1,2,3,4 };
//    Solution().productExceptSelf(nums);
//}