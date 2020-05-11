//#include<iostream>
//#include <vector>
//#include <numeric>
//#include <iterator>
//#include <sstream>
//
//using namespace std;
//class Solution {
//public:
//    string countAndSay(int n) {
//        vector<int> li1;
//        vector<int> li2;
//        li1.push_back(1);
//        for (int i = 2; i <= n; i++)
//        {
//            int count = 1;
//            for(int x = 0; x < li1.size();x++)
//            {
//                if (x + 1 == li1.size())
//                    continue;
//                if (li1[x] == li1[x + 1])
//                    count++;
//                else
//                {
//                    li2.push_back(count);
//                    li2.push_back(li1[x]);
//                    count = 1;
//                }
//            }
//            li2.push_back(count);
//            li2.push_back(li1[li1.size() - 1]);
//            li1 = li2;
//            li2 = vector<int>();
//        }
//        stringstream ss;
//        copy(li1.begin(), li1.end(), ostream_iterator<int>(ss, ""));
//        return ss.str();
//    }
//};
//int main()
//{
//    while (1)
//    {
//        int x = 0;
//        cin >> x;
//        if (x == 0)
//            break;
//        Solution S;
//        cout << S.countAndSay(x);
//    }
//}