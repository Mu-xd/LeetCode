////----------------------------------------------------------
////LeetCode55. ��Ծ��Ϸ
////����һ���Ǹ��������飬�����λ������ĵ�һ��λ�á�
////�����е�ÿ��Ԫ�ش������ڸ�λ�ÿ�����Ծ����󳤶ȡ�
////�ж����Ƿ��ܹ��������һ��λ�á�
////----------------------------------------------------------
////˼·��
////  ̰���㷨
////���ߣ�Mxd
////ʱ�䣺2020/06/05
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int maxIndex = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            //λ��iʱ�ɴ��
//            if (i <= maxIndex)
//            {
//                maxIndex = i + nums[i] > maxIndex ? i + nums[i] : maxIndex;
//                if (maxIndex >= nums.size() - 1)
//                    return true;
//            }
//        }
//        return false;
//    }
//};
//
//int main()
//{
//    vector<int> nums = { 3,2,1,0,4 };
//    Solution().canJump(nums);
//}