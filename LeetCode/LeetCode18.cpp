#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
    //利用分解的想法将4数之和分解为三数之和
    //在三数之和双指针的方法外层加一个for循环
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        ///先对nums进行排序
        sort(nums.begin(), nums.end());
        //创建一个vector 用于存储结果
        vector<vector<int>> res;
        //遍历数组 当数组剩余元素不足4个时候停止
        for (int x = 0; x < nums.size() - 3;)
        {
            int item = nums[x];
            //获取三数之和的结果
            vector<vector<int>> res_tree = threeSum(vector<int>(nums.begin() + x + 1, nums.end()), target - item);
            //将结果添加到结果列表中
            for (vector<int> items : res_tree)
            {
                res.push_back(vector<int>({ item, items[0], items[1], items[2] }));
            }
            //去除重复元素的影响
            while (x < nums.size() - 3 && item == nums[x]) x++;
        }
        return res;
    }
private:
    ///三数之和
    vector<vector<int>> threeSum(vector<int> nums, int target)
    {
        //int target = 0;
        //此时nums已经是有序数列否则排序
        //sort(nums.begin(), nums.end());
        //用于返回结果的数组
        vector<vector<int>> res;
        for (int x = 0; x < nums.size();)
        {
            int item = nums[x];
            for (int i = x + 1, j = nums.size() - 1; i < j;)
            {
                //相同时跳过  防止重复选择
                if (nums[i] + nums[j] < target - nums[x]) { i++; continue; }
                if (nums[i] + nums[j] > target - nums[x]) { j--; continue; }
                res.push_back(vector<int>({ nums[x],nums[i],nums[j] }));
                //对于数组的循环需要越界保护
                while (i < nums.size() && res.back()[1] == nums[i])i++;
                while (j > i && res.back()[2] == nums[j])j--;
            }
            while (x < nums.size() && item == nums[x]) x++;
        }
        return res;
    }
};
int main()
{
    vector<int> nums({ 1, 0, -1, 0, -2, 2 });
    Solution ss;
    vector<vector<int>> res = ss.fourSum(nums, 0);
    NULL;
}