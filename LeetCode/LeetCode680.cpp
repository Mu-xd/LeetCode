//#include<iostream>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//    bool validPalindrome(string s) {
//        
//        //for (int i = 0; i < s.size(); i++)
//        //{
//        //    char x = s[i];
//        //    s.erase(s.begin() + i);
//        //    string s1 = s;
//        //    reverse(s.begin(), s.end());
//        //    if (s1 == s)
//        //        return true;
//        //    reverse(s.begin(), s.end());
//        //    s.insert(s.begin() + i, x);
//        //}
//        //bool flag = true;//标志是否发生了删除字符串 false 为是
//        
//        for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
//        {
//            if (s[i] == s[j])
//                continue;
//
//            char x = s[i];
//            s.erase(s.begin() + i);
//            string s1 = s;
//            reverse(s.begin(), s.end());
//            if (s1 == s)
//                return true;
//            reverse(s.begin(), s.end());
//            s.insert(s.begin() + i, x);
//
//            x = s[j];
//            s.erase(s.begin() + j);
//            s1 = s;
//            reverse(s.begin(), s.end());
//            if (s1 == s)
//                return true;
//            return false; 
//        }
//        return true;
//    }
//};
//int main()
//{
//    while (true)
//    {
//        string s = "";
//        cin >> s;
//        Solution S;
//        cout << S.validPalindrome(s) << endl;
//    }
//
//}