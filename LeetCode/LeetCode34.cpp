//#include <iostream>
//#include <vector>
//using namespace std;
//class Solution {
//public:
//    //���ö��ַ�����
//    //����Ҫע��߽������  �� - 1ʱ ȥ�Ⱥ� -1 + 1 ��-1 ʱ����ȡ
//    //ɨ��߽��˼�루���ұ߽�Ϊ�����ǵ�С�ڵ���ʱ������left ���� ����ʱ r����ֱ������������
//    // �ж� �Ƿ���� ���߲����
//    vector<int> searchRange(vector<int>& nums, int target) {
//        if (nums.size() == 1 && nums[0] == target)
//            return vector<int>({ 0,0 });
//        int left = 0, right = nums.size() - 1;
//        int mind;
//        vector<int> res;
//        while (left <= right)
//        {
//            mind = left + (right - left) / 2;
//            //�ҵ���Ŀ��Ԫ��  �������ı߽�  ���������Բ��ҵķ��� ��Ӱ��ʱ�临�Ӷ�
//            if (nums[mind] == target)
//            {
//                //Ѱ�����߽�
//                int rights = right, minds = mind;
//                right = mind;
//                //�����ö��ַ���left��mind ���� ���������ʱ 
//                while (left <= right) {
//                    mind = left + (right - left) / 2;
//                    if (nums[mind] < target) {
//                        left = mind + 1;
//                    }
//                    else if (nums[mind] == target) {
//                        right = mind - 1;
//                    }
//                }
//                if (left < 0 || nums[left] != target)
//                    res.push_back(-1);
//                else
//                    res.push_back(left);
//                //Ѱ���Ҳ�߽�
//                left = minds;
//                right = rights;
//                while (left <= right) {
//                    mind = left + (right - left) / 2;
//                    if (nums[mind] > target) {
//                        right = mind - 1;
//                    }
//                    else if (nums[mind] == target) {
//                        left = mind + 1;
//                    }
//                }
//                if (right < 0 || nums[right] != target)
//                    res.push_back(-1);
//                else
//                    res.push_back(right);
//            }
//            else if (nums[mind] > target)
//                right = mind - 1;
//            else if (nums[mind] < target)
//                left = mind + 1;
//        }
//        if (res.size() == 0)
//        {
//            res = vector<int>({ -1 ,-1 });
//        }
//        return res;
//    }
//};
//int main()
//{
//    vector<int> nums = vector<int>({1,2,3 });
//    int target = 2;
//    Solution ss;
//    cout << ss.searchRange(nums, target)[0] << ","<<ss.searchRange(nums, target)[1];
//}