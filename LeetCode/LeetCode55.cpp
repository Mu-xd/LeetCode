////----------------------------------------------------------
////LeetCode55. 跳跃游戏
////给定一个非负整数数组，你最初位于数组的第一个位置。
////数组中的每个元素代表你在该位置可以跳跃的最大长度。
////判断你是否能够到达最后一个位置。
////----------------------------------------------------------
////思路：
////  贪心算法
////作者：Mxd
////时间：2020/06/05
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int maxIndex = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            //位置i时可达的
//            if (i <= maxIndex)
//            {
//                maxIndex = i + nums[i] > maxIndex ? i + nums[i] : maxIndex;
//                if (maxIndex >= nums.size() - 1)
//                    return true;
//            }
//        }
//        return false;
//    }
//};
//
//int main()
//{
//    vector<int> nums = { 3,2,1,0,4 };
//    Solution().canJump(nums);
//}