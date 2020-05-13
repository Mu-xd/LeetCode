#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    //对于有空间限制的 可以考虑在给的空间上做文章
    int firstMissingPositive(vector<int>& nums) {
        //遍历这个数组
        for (int i = 0; i < nums.size(); i++)
        {
            while (nums[i] != i + 1 && nums[i] <= nums.size() && nums[i] > 0)
            {
                if (nums[i] == nums[nums[i] - 1])
                {
                    nums[i] = 0;
                    continue;
                }
                int x = nums[i];
                nums[i] = nums[nums[i] - 1];
                nums[x - 1] = x; 
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i + 1)
                return i + 1;
        }
        return nums.size() + 1;
    }
};

int main()
{
    vector<int> num = {1,1};
    Solution S;
    cout << S.firstMissingPositive(num) << endl;

}