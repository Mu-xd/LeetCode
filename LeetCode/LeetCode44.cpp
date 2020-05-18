//#include<iostream>
//#include<list>
//#include<map>
//using namespace std;
//class Solution {
//public:
//	bool isMatch(string s, string p) {
//		has = map<list<string>, bool>();
//		return this->isMatchson(s, p);
//	};
//private:
//	map<list<string>, bool> has;
//	bool isMatchson(string s, string p)
//	{
//		int i = 0;
//		for (; i < p.size() - 1; i++)
//		{
//			if (p[i] == '*' && i + 1 < p.size() && p[i] == p[i + 1])
//				;
//			else
//				break;
//		}
//		p = p.substr(i, p.size());
//		if (has.find({ s,p }) != has.end())
//			return has[{s, p}];
//		//结束条件：两个串都为空（匹配成功）两个串中的一个为空（匹配失败） 
//		if ((s == "" && p == "") || p == "*")
//			return true;
//		if (s == "" || p == "")
//			return false;
//		if (p[0] == '*')
//		{
//			auto res = isMatchson(s.substr(1, s.size() - 1), p); 
//			has[{s.substr(1, s.size() - 1), p}] = res;
//			if (res)
//			{
//				return true;
//			}
//			else
//			{
//				auto res1 = isMatchson(s, p.substr(1, p.size() - 1));
//				has[{s, p.substr(1, p.size() - 1)}] = res1;
//				return res1;
//			}
//		}
//		if (p[0] == s[0] || p[0] == '?')
//		{
//			auto res1 = isMatchson(s.substr(1, s.size() - 1), p.substr(1, p.size() - 1));
//			has[{s.substr(1, s.size() - 1), p.substr(1, p.size() - 1)}] = res1;
//			return res1;
//		}
//		else
//			return false;
//	};
//};
//int main()
//{
//	while (true)
//	{
//		string s = "ho";
//		string p = "ho**";
//		cin >> s >> p;
//		Solution S;
//		cout << S.isMatch(s, p)<<endl;
//	}
//}