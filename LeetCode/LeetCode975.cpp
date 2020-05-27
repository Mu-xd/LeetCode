//----------------------------------------------------------
//LeetCode974. 和可被 K 整除的子数组
//给定一个整数数组 A，返回其中元素之和可被 K 整除的（连续、非空）子数组的数目。
//思路：
//  前缀和 + 同余(这里要考虑正负)取模 + 排列组合
//作者：Mxd
//时间：2020/05/27
//-----------------------------------------------------------
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    //前缀和 + 同余(这里要考虑正负)取模
    int subarraysDivByK(vector<int>& A, int K) {
        //这里注意同余时第二次出现的相同的余数才是一个子数组
        //而余数为0的情况时第一次出现的就是子数组 余数为 0 时需要 + 1
        map<int, int> record = { {0,1} };
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < A.size(); i++)
        {
            sum += A[i];
            record[(sum % K + K)%K]++;//(sum % K + K)&K 是考虑了负数的取模运算
        }
        //进行排列组合
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