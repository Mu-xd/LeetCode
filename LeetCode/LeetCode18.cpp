#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
    //���÷ֽ���뷨��4��֮�ͷֽ�Ϊ����֮��
    //������֮��˫ָ��ķ�������һ��forѭ��
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        ///�ȶ�nums��������
        sort(nums.begin(), nums.end());
        //����һ��vector ���ڴ洢���
        vector<vector<int>> res;
        //�������� ������ʣ��Ԫ�ز���4��ʱ��ֹͣ
        for (int x = 0; x < nums.size() - 3;)
        {
            int item = nums[x];
            //��ȡ����֮�͵Ľ��
            vector<vector<int>> res_tree = threeSum(vector<int>(nums.begin() + x + 1, nums.end()), target - item);
            //�������ӵ�����б���
            for (vector<int> items : res_tree)
            {
                res.push_back(vector<int>({ item, items[0], items[1], items[2] }));
            }
            //ȥ���ظ�Ԫ�ص�Ӱ��
            while (x < nums.size() - 3 && item == nums[x]) x++;
        }
        return res;
    }
private:
    ///����֮��
    vector<vector<int>> threeSum(vector<int> nums, int target)
    {
        //int target = 0;
        //��ʱnums�Ѿ����������з�������
        //sort(nums.begin(), nums.end());
        //���ڷ��ؽ��������
        vector<vector<int>> res;
        for (int x = 0; x < nums.size();)
        {
            int item = nums[x];
            for (int i = x + 1, j = nums.size() - 1; i < j;)
            {
                //��ͬʱ����  ��ֹ�ظ�ѡ��
                if (nums[i] + nums[j] < target - nums[x]) { i++; continue; }
                if (nums[i] + nums[j] > target - nums[x]) { j--; continue; }
                res.push_back(vector<int>({ nums[x],nums[i],nums[j] }));
                //���������ѭ����ҪԽ�籣��
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