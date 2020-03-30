//#include <iostream>
//#include <string>
//using namespace std;
//class Solution {
//public:
//    //用动态规划的方法 
//    //不用特殊的方法去处理问题
//    //将*分解为两步 每次考虑跳过星号和匹配一个字符 将问题进行分解
//    //每一步得到的匹配数据和上一步的数据进行综合判断得出当前步骤的信息
//    bool isMatch1(string s, string p) {
//        try {
//            return doMatch(s, 0, p, 0);
//        }
//        catch (...)
//        {
//            cout<< "catch (...)" << endl;
//        }
//    }
//private:
//    bool doMatch(const string& s, int sIndex, const string& p, int pIndex)
//    {
//        //判断匹配完成 如果p字符串完成且s字符串完成 则完成
//        if (p.length() <= pIndex) return s.length() <= sIndex;
//        //如果模式串匹配完成 则失败 否则判断是否可以匹配
//        bool currentMatch = sIndex < s.length() && (s[sIndex] == p[pIndex] || p[pIndex] == '.');
//        //判断下一个是不是*
//        if (pIndex + 1 < p.length() && p[pIndex + 1] == '*')
//        {
//            return doMatch(s, sIndex, p, pIndex + 2) || (currentMatch && doMatch(s, sIndex + 1, p, pIndex));
//        }
//        else
//        {
//            //当次匹配成功并且下一次也匹配成功
//            return currentMatch && doMatch(s, sIndex + 1, p, pIndex+1);
//        }
//    }
//};
//int main()
//{
//    string a = "aaa";
//    string b = "a*a";
//    Solution s;
//    cout << s.isMatch1(a, b);
//}