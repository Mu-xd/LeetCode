#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        return permute_son(nums, vector<vector<int>>());
    }
private:
    vector<vector<int>> permute_son(vector<int> nums, vector<vector<int>> s)
    {
        //ÖÕÖ¹Ìõ¼ş
        if (nums.size() == 1)
            return { {nums[0]} };
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            nums.erase(nums.begin() + i);
            auto sx = permute_son(nums, s);
            for (int j = 0; j < sx.size(); j++)
            {
                sx[j].push_back(x);
                res.push_back(sx[j]);
            }
            nums.insert(nums.begin() + i, x);
        }
        return res;
    }
};
int main()
{
	vector<int> nums = { 1,2,3 };
    Solution S;
    S.permute(nums);
}