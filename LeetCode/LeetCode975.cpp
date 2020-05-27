//----------------------------------------------------------
//LeetCode974. �Ϳɱ� K ������������
//����һ���������� A����������Ԫ��֮�Ϳɱ� K �����ģ��������ǿգ����������Ŀ��
//˼·��
//  ǰ׺�� + ͬ��(����Ҫ��������)ȡģ + �������
//���ߣ�Mxd
//ʱ�䣺2020/05/27
//-----------------------------------------------------------
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    //ǰ׺�� + ͬ��(����Ҫ��������)ȡģ
    int subarraysDivByK(vector<int>& A, int K) {
        //����ע��ͬ��ʱ�ڶ��γ��ֵ���ͬ����������һ��������
        //������Ϊ0�����ʱ��һ�γ��ֵľ��������� ����Ϊ 0 ʱ��Ҫ + 1
        map<int, int> record = { {0,1} };
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < A.size(); i++)
        {
            sum += A[i];
            record[(sum % K + K)%K]++;//(sum % K + K)&K �ǿ����˸�����ȡģ����
        }
        //�����������
        for (auto item : record)
        {
            ans += (item.second * (item.second - 1)) / 2;
        }
        return ans;
    }
};

int main() {
    vector<int> A = { 5,5,0,-3,5};
    while(true)
    {
        int K = 5;
        cin >>K;
        cout << Solution().subarraysDivByK(A, K) << endl;
    }
}