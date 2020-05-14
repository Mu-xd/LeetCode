//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//    int trap(vector<int>& height) {
//        if (height.size() == 0)
//            return 0;
//        int res = 0;
//        int maxx = max_element(height.begin(), height.end()) - height.begin();
//        for (int i = 0; i <= maxx; i++)
//        {
//            int hx = 0;
//            for (int j = i + 1; j <= maxx; j++)
//            {
//                if (height[j] < height[i])
//                    hx += height[i] - height[j];
//                else 
//                {
//                    res += hx;
//                    i = j -1;
//                    break;
//                }
//            }
//        }
//        for (int i = height.size() - 1; i >= maxx; i--)
//        {
//            int hx = 0;
//            for (int j = i - 1; j >= maxx; j--)
//            {
//                if (height[j] < height[i])
//                    hx += height[i] - height[j];
//                else
//                {
//                    res += hx;
//                    i = j + 1;
//                    break;
//                }
//            }
//        }
//        return res;
//    }
//};
//int main()
//{
//	vector<int> height = { 2,0,2 };
//    Solution S;
//    cout << S.trap(height);
//}