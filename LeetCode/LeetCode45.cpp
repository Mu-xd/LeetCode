////----------------------------------------------------------
////LeetCode45. 跳跃游戏 II
////给定一个非负整数数组，你最初位于数组的第一个位置。
////数组中的每个元素代表你在该位置可以跳跃的最大长度。
////你的目标是使用最少的跳跃次数到达数组的最后一个位置。
////思路：
////  贪心算法/暴力法
////作者：Mxd
////时间：2020/05/31
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//    //贪心算法
//    int jump(vector<int>& nums) {
//        //return (this->jumpOne(nums, 0));
//        int ans = 0;
//        int i = 0;
//        while (i < nums.size() - 1)
//        {
//            int max = 0;
//            int max_index = 0;
//            if (i + nums[i] >= nums.size() - 1)
//            {
//                ans++;
//                break;
//            }
//            for (int j = 1; j <= nums[i]; j++)
//            {
//                if ((i + j) < (nums.size() - 1) && max <= (nums[i + j] + i + j))
//                {
//                    max = nums[i + j] + i + j;
//                    max_index = j;
//                }
//            }
//            i = i + max_index;
//            ans++;
//        }
//        return ans;
//    }
//private:
//    map<int, int> hsx;
//    //暴力法
//    int jumpOne(vector<int>& nums, int start)
//    {
//        if (hsx.find(start) != hsx.end())
//            return hsx[start];
//        if (start == nums.size() - 1)
//            return 0;
//        if (start >= nums.size() || nums[start] == 0)
//            return -1;
//        int x = INT16_MAX;
//        for (int i = 1; i <= nums[start]; i++)
//        {
//            int u;
//            if (hsx.find(start + i) == hsx.end())
//            {
//                u = jumpOne(nums, start + i);
//                hsx[start + i] = u;
//            }
//            else
//                u = hsx[start + i];
//            if (u == -1)
//                continue;
//            if (x > u + 1)
//                x = u + 1;
//        }
//        return x;
//    }
//};
//int main()
//{
//    vector<int> nums = { 2,3,1,1,4 };
//    cout << Solution().jump(nums);
//}