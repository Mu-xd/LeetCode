////----------------------------------------------------------
////LeetCode4 寻找两个正序数组的中位数
////思路：
////  找第k个最小的元素
////  对两个数组进行二分法  每一次忽略二分法中分离的较小的数组的元素 更新值
////作者：Mxd
////时间：2020/05/24
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k) {
//
//        int m = nums1.size();
//        int n = nums2.size();
//        int index1 = 0, index2 = 0;
//
//        while (true) {
//            // 边界情况
//            if (index1 == nums1.size()) {
//                return nums2[index2 + k - 1];
//            }
//            if (index2 == nums2.size()) {
//                return nums1[index1 + k - 1];
//            }
//            if (k == 1) {
//                return nums1[index1] > nums2[index2] ? nums2[index2] : nums1[index1];// min(nums1[index1], nums2[index2]);
//            }
//
//            // 正常情况
//            int newIndex1 = index1 + k / 2 - 1> m - 1 ? m - 1: index1 + k / 2 - 1;
//            int newIndex2 = index2 + k / 2 - 1 > n - 1 ? n - 1: index2 + k / 2 - 1;
//            int pivot1 = nums1[newIndex1];
//            int pivot2 = nums2[newIndex2];
//            if (pivot1 <= pivot2) {
//                k -= newIndex1 - index1 + 1;
//                index1 = newIndex1 + 1;
//            }
//            else {
//                k -= newIndex2 - index2 + 1;
//                index2 = newIndex2 + 1;
//            }
//        }
//    }
//
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int totalLength = nums1.size() + nums2.size();
//        if (totalLength % 2 == 1) {
//            return getKthElement(nums1, nums2, (totalLength + 1) / 2);
//        }
//        else {
//            return (getKthElement(nums1, nums2, totalLength / 2) + getKthElement(nums1, nums2, totalLength / 2 + 1)) / 2.0;
//        }
//    }
//};
//int main()
//{
//    vector<int> nums1 = {1};
//    vector<int> nums2 = {2};
//    Solution S;
//    cout << S.findMedianSortedArrays(nums1, nums2) << endl;
//}