#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		sort(candidates.begin(), candidates.end());
		auto res = Sum(candidates, target,0);
		res.erase(unique(res.begin(), res.end()), res.end());
		return res;
	}
	vector<vector<int>> Sum(vector<int>& candidates, int target,int s)
	{
		//结束条件
		vector<vector<int>> res;
		if (target <= 0)
			return res;
		for (int i = 0; i < candidates.size(); i++)
		{
			//这影响最后的排序 和剪枝
			if (candidates[i] < s)
				continue;
			if (candidates[i] < target)
			{
				auto r = Sum(candidates, target - candidates[i], candidates[i]);
				if (r != vector<vector<int>>())
				{
					for (int j = 0; j < r.size(); j++)
					{
						r[j].push_back(candidates[i]);
					}
					res.insert(res.end(), r.begin(), r.end());
				}
			}
			else if (candidates[i] == target) {
				res.push_back({ candidates[i] });
			}
			else
				return res;
		}
		return res;
	}
};
int main()
{
	vector<int> candidates = {
		8,7,4,3
	};
	int target = 11;
	Solution S;
	S.combinationSum(candidates, target);
}