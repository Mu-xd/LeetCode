//#include <iostream>
//#include <vector>
//using namespace std;
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int left = 0, right = nums.size();
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] == target)
//                return mid;
//            else if(nums[mid] < target)
//            {
//                if (mid + 1 < nums.size() && nums[mid + 1] > target)
//                    return mid + 1;
//                left = mid + 1;
//                if (left >= nums.size())
//                    return nums.size();
//            }
//            else
//            {
//                if (mid - 1 >= 0 && nums[mid - 1] < target)
//                    return mid;
//                right = mid - 1;
//                if (right <= 0)
//                    return 0;
//            }
//        }
//        return 0;
//    }
//};
//int main()
//{
//    vector<int> nums = vector<int>({ 1,3,5,6 });
//    int target = 7;
//    Solution ss;
//    std::cout << ss.searchInsert(nums,target);
//    ;
//}