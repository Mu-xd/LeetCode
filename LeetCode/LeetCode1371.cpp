//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//    int findTheLongestSubstring(string s) {
//        vector<int> pos(1<<5,-1);//�� ��i��״̬�� λ��
//        pos[0] = 0;
//        vector<char> chars = {'a','e','i','o','u'};
//        int maxl = 0;
//        int state = 0; //0��ʱ���� ż�� ����������
//        //ż���Ļ� ֱ�Ӽ�¼
//        for (int i = 0; i < s.size(); i++)
//        {
//            for (int j = 0; j < chars.size(); j++)
//            {
//                if (s[i] == chars[j])
//                {
//                    state ^= 1 << j;
//                    break;
//                }
//            }
//            //states.push_back(state);
//            //ֻ�洢������һ�γ��ֵ�ֵ ��������������-�����ﵽ���
//            if (pos[state] == -1) // ������һ������
//                pos[state] = i + 1;
//            else//������ֹ�һ�ξͿ�����������Ƚϸ������ֵ
//                maxl = max(maxl, i + 1 - pos[state]);
//        }
//        return maxl;
//    }
//};
//
//int main()
//{
//    while (true)
//    {
//        string s;
//        cin >> s;
//        Solution S;
//        cout << S.findTheLongestSubstring(s) << endl;
//    }
//}