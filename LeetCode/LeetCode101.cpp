////----------------------------------------------------------
////LeetCode101. �Գƶ�����
////	����һ����������������Ƿ��Ǿ���ԳƵ�
////˼·��
////
////���ߣ�Mxd
////ʱ�䣺2020/05/31
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    //��������ķ���
//    bool isSymmetricC(TreeNode* root) {
//        vector<TreeNode*> stockTree = { root };
//        while (stockTree.size() != 0)
//        {
//            for (int i = 0, j = (stockTree.size() - 1); i < j; i++, j--)
//            {
//                if (stockTree[i] == nullptr && stockTree[j] == nullptr)
//                    continue;
//                if (stockTree[i] == nullptr || stockTree[j] == nullptr)
//                    return false;
//                if (stockTree[i]->val != stockTree[j]->val)
//                    return false;
//            }
//            int n = stockTree.size();
//            int x = 0;
//            for (int i = 0; i < n; i++)
//            {
//                if (stockTree[i] == nullptr)
//                {
//                    x++;
//                    stockTree.push_back(nullptr);
//                    stockTree.push_back(nullptr);
//                    continue;
//                }
//                stockTree.push_back(stockTree[i]->left);
//                stockTree.push_back(stockTree[i]->right);
//            }
//            stockTree.erase(stockTree.begin(), stockTree.begin() + n);
//            cout << endl;
//            if (x == n)
//                return true;
//        }
//        return true;
//    }
//    //����˼·
//    bool isSymmetric(TreeNode* root)
//    {
//        return cheak(root, root);
//    }
//    bool cheak(TreeNode* p, TreeNode* q)
//    {
//        if (!p && !q) return true;
//        if (!p || !q) return false;
//        return p->val == q->val && cheak(p->left, q->right) && cheak(p->right, q->left);
//    }
//};
//
//int main()
//{
//    
//}