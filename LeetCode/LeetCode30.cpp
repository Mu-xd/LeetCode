//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//class Solution {
//public:
//    vector<int> findSubstring(string s, vector<string>& words) {
//        if (words.size() == 0)
//            return vector<int>();
//        //����һ����ϣ�� ���ڴ洢words �еĴ�
//        unordered_map<string, int> map1;
//        //��һ����ϣ�� ���ڴ洢 s��ƥ��Ĵ� 
//        unordered_map<string, int> map2;
//        //���ڼ�¼���
//        vector<int> res;
//        //��words�洢����ϣ���� ������ֵ�ǳ��ֵĴ���
//        for (string Item : words)
//        {
//            map1[Item]++;
//            //cout << Item << ":" << map1[Item] << endl;
//        }
//        //��¼���ʳ���
//        int len = words[0].size();
//        //��¼ȫ��words -1�ĳ���
//        int all_len = len * (words.size() - 1);
//        //�û������ڵķ��� ����s�ַ��� 
//        for (int i = 0; i < s.size() - all_len;i++)
//        {
//            ;            //�ӵ�i���ַ���ʼ����һ����������
//            for (int j = 0; j < words.size(); j++)
//            {
//                string str = s.substr(i + j * len, len);
//                //�ж���һ���Ƿ����ƥ�䵽word
//                if (map1.find(str) != map1.end())
//                {
//                    map2[str]++;
//                    //�ж���ȫƥ�䵽��
//                    if (map2 == map1)
//                    {
//                        res.push_back(i);
//                        map2 = unordered_map<string, int>();
//                    }
//                    //��ǰƥ�䵽���ַ��Ѿ�������ģʽ������
//                    //����Ϊƥ��ʧ�� ��ͷ��ʼƥ��
//                    if (map2[str] > map1[str])
//                    {
//                        map2 = unordered_map<string, int>();
//                    }
//                }
//                else
//                {
//                    map2 = unordered_map<string, int>();
//                    break;
//                }
//            }
//        }
//        return res;
//    }
//};
//int main()
//{
//    vector<string> words({ "ab", "ba", "ab", "ba" });
//    string s("abaababbaba");
//    Solution ss;
//    vector<int> res = ss.findSubstring(s, words);
//    for (int i : res)
//    {
//        cout << i<<",";
//    }
//    
//}