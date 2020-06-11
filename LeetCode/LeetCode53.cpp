////----------------------------------------------------------
////LeetCode53. 最大子序和
////给定一个整数数组 nums ，找到一个具有最大和的连续子数组
////（子数组最少包含一个元素），返回其最大和。
////思路：
////	
////作者：Mxd
////时间：2020/06/10
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        ////动态规划1 修改原数组
//        //for (int i = 1; i < nums.size(); i++)
//        //{
//        //    if (nums[i - 1] > 0)
//        //        nums[i] += nums[i - 1];
//        //}
//        //return *max_element(nums.begin(), nums.end());
//        //动态规划2 f(i)=max{f(i−1)+ai,ai}
//        int fj = 0;
//        int ans = nums[0];
//        for (int& num : nums)
//        {
//            fj = max(fj + num, num);
//            ans = max(ans, fj);
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//	vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
//    cout << Solution().maxSubArray(nums) << endl;
//}