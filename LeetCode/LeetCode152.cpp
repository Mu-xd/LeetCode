//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//    int maxProduct1(vector<int>& nums) {
//        ///暴力（超时）
//        int max = nums[0];
//        for (int i = 0; i < nums.size(); i++)
//        {
//            int maxl = nums[i];
//            int ss = nums[i];
//            for (int j = i + 1; j < nums.size(); j++)
//            {
//                ss *= nums[j];
//                if (ss > maxl)
//                    maxl = ss;
//            }
//            if (max < maxl)
//                max = maxl;
//        }
//        return max;
//    }
//    int maxProduct2(vector<int>& nums) {
//        //动态规划方法（超时）不仅包含了最值的处理  而且包含了其他步骤的处理
//        map<int, vector<int>> hsx;
//        hsx[0] = { nums[0] };
//        int max = nums[0];
//        for (int i = 1; i < nums.size(); i++)
//        {
//            vector<int> s = { nums[i] };
//            for (int j = 0; j < hsx[i - 1].size(); j++)
//            {
//                s.push_back(hsx[i - 1][j] * nums[i]);
//                if (max < hsx[i - 1][j] * nums[i])
//                    max = hsx[i - 1][j] * nums[i];
//            }
//            hsx[i] = s;
//        }
//        return max;
//    }
//    int maxProduct3(vector<int>& nums) {
//        //动态规划
//        vector<int> maxF(nums), minF(nums);
//        for (int i = 1; i < nums.size(); i++)
//        {
//            maxF[i] = max(maxF[i - 1] * nums[i], max(nums[i], minF[i - 1] * nums[i]));
//            minF[i] = min(minF[i - 1] * nums[i], min(nums[i], maxF[i - 1] * nums[i]));
//        }
//        return *max_element(maxF.begin(), maxF.end());
//    }
//    int maxProduct(vector<int>& nums) {
//        //较3 进行了内存的优化
//        int maxF = nums[0], minF = nums[0], ans = nums[0];
//        for (int i = 1; i < nums.size(); ++i) {
//            int mx = maxF, mn = minF;
//            maxF = max(mx * nums[i], max(nums[i], mn * nums[i]));
//            minF = min(mn * nums[i], min(nums[i], mx * nums[i]));
//            ans = max(maxF, ans);
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//	vector<int> nums = { 2,3,-2,4 };
//    Solution S;
//    cout << S.maxProduct(nums) << endl;
//}