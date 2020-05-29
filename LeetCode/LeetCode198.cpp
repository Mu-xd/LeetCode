////----------------------------------------------------------
////LeetCode198. 打家劫舍
////你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，
////影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，
////如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
////给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，
////一夜之内能够偷窃到的最高金额。
////-------------------------------------------------------------
////思路：
////	动态规划：应该考虑i和 i-1、i-2的关系  
////	这个问题应该是一个前缀和转换的问题 比较前缀和的大小
////时间复杂度：  空间复杂度:
////作者：Mxd
////时间：2020/05/29
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//private:
//	int recursionRob(vector<int>& nums, int begin) {
//		//倒序  这里思路有点奇怪
//		if (nums.size() < begin + 1)
//			return 0;
//		else if (nums.size() == begin + 1)
//			return nums[begin];
//		int a1 = recursionRob(nums, begin + 2) + nums[begin];//选择了第一个
//		int a2 = recursionRob(nums, begin + 2 + 1) + nums[begin + 1];//选择了第二个
//		return a1 > a2 ? a1 : a2;
//		
//	}
//public:
//	int rob(vector<int>& nums) {
//		//return recursionRob(nums, 0);
//		if (nums.size() == 0) return  0;
//		if (nums.size() == 1) return nums[0];
//		vector<int> dp = { nums[0] ,nums[0] > nums[1] ? nums[0] : nums[1] };
//		for (int i = 2; i < nums.size(); i++)
//		{
//			dp.push_back(nums[i] > nums[i - 1] ? nums[i] : nums[i - 1]);
//		}
//		return dp[dp.size() - 1];
//	}
//};
//
//int main() {
//	vector<int> nums = { 2,7,9,1,3,5};
//	cout << Solution().rob(nums) << endl;
//}