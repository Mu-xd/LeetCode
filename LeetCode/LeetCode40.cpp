//#include<iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//class Solution {
//public:
//	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//		sort(candidates.begin(), candidates.end());
//		auto res = Sum(candidates, target, 0);
//		return res;
//	}
//	vector<vector<int>> Sum(vector<int>& candidates, int target, int s)
//	{
//		//结束条件
//		vector<vector<int>> res;
//		if (target <= 0)
//			return res;
//		for (int i = 0; i < candidates.size(); i++)
//		{
//			//这影响最后的排序 和剪枝
//			if (candidates[i] < s)
//				continue;
//			if (i > 0 && candidates[i] == candidates[i - 1])
//				continue;
//			if (candidates[i] < target)
//			{
//				auto x = candidates;
//				x.erase(x.begin() + i);
//				auto r = Sum(x, target - candidates[i], candidates[i]);
//				if (r != vector<vector<int>>())
//				{
//					for (int j = 0; j < r.size(); j++)
//					{
//						r[j].push_back(candidates[i]);
//					}
//					res.insert(res.end(), r.begin(), r.end());
//				}
//			}
//			else if (candidates[i] == target) {
//				res.push_back({ candidates[i] });
//			}
//			else
//				return res;
//		}
//		return res;
//	}
//};
//int main()
//{
//	vector<int> candidates = {
//		10,1,2,7,6,1,5
//	};
//	int target = 8;
//	Solution S;
//	S.combinationSum2(candidates, target);
//}