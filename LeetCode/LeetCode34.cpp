//#include <iostream>
//#include <vector>
//using namespace std;
//class Solution {
//public:
//    //利用二分法查找
//    //这里要注意边界的问题  当 - 1时 去等号 -1 + 1 不-1 时都不取
//    //扫描边界的思想（以右边界为例）是当小于等于时不断让left 右移 大于时 r左移直到条件不成立
//    // 判断 是否溢出 或者不相等
//    vector<int> searchRange(vector<int>& nums, int target) {
//        if (nums.size() == 1 && nums[0] == target)
//            return vector<int>({ 0,0 });
//        int left = 0, right = nums.size() - 1;
//        int mind;
//        vector<int> res;
//        while (left <= right)
//        {
//            mind = left + (right - left) / 2;
//            //找到了目标元素  则找他的边界  不能用线性查找的方法 会影响时间复杂度
//            if (nums[mind] == target)
//            {
//                //寻找左侧边界
//                int rights = right, minds = mind;
//                right = mind;
//                //继续用二分法对left到mind 查找 当左大于右时 
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
//                //寻找右侧边界
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