////----------------------------------------------------------
////LeetCode45. ��Ծ��Ϸ II
////����һ���Ǹ��������飬�����λ������ĵ�һ��λ�á�
////�����е�ÿ��Ԫ�ش������ڸ�λ�ÿ�����Ծ����󳤶ȡ�
////���Ŀ����ʹ�����ٵ���Ծ����������������һ��λ�á�
////˼·��
////  ̰���㷨/������
////���ߣ�Mxd
////ʱ�䣺2020/05/31
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//    //̰���㷨
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
//    //������
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