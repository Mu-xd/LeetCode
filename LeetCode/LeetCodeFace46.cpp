////----------------------------------------------------------
////LeetCode������46. �����ַ�����ַ���
////����һ�����֣����ǰ������¹����������Ϊ�ַ�����0 ����� ��a�� 
////1 ����� ��b����������11 ����� ��l����������25 ����� ��z����
////һ�����ֿ����ж�����롣����ʵ��һ����������������һ�������ж����ֲ�ͬ�ķ��뷽����
////----------------------------------------------------------
////˼·��
////  ��̬�滮 ����쳲���������
////���ߣ�Mxd
////ʱ�䣺2020/06/09
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    //��ͷ��β�ʹ�β��ͷû��Ӱ��
//    int translateNum(int num) {
//        vector<int> anss;
//        anss.push_back(1);
//        if(num % 100 >= 10 && num%100 <=25)
//            anss.push_back(2);
//        else
//            anss.push_back(1);
//        long f = 100;
//        while (f <= num)
//        {
//            if (num % (f * 10) / (f / 10) >= 10 && num % (f * 10) / (f / 10) <= 25)
//                //�ų�05 ���ֵ�Ӱ��������Ҫ����10
//                anss.push_back(anss[anss.size() - 1] + anss[anss.size() - 2]);
//            else
//                anss.push_back(anss[anss.size() - 1]);
//            f *= 10;
//        }
//        return anss[anss.size() - 1];
//    }
//};
//
//int main()
//{
//    while (true)
//    {
//        int x;
//        cin >> x;
//        cout << Solution().translateNum(x) << endl;
//    }
//}