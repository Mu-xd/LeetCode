////----------------------------------------------------------
////LeetCode142环形链表 II
////给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
////为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
////如果 pos 是 - 1，则在该链表中没有环。
////说明：不允许修改给定的链表。
////-------------------------------------------------------------
////思路：
////  利用佛洛依德判环（快慢指针）的方法可以找出是否存在环 并且指向环中的某一个位置
////  考虑快指针执行的路径 f = 2s = s + nb (f快指针步数，s慢指针步数 b环长) 即 s走过的步数是nb步
////  入口的位置为a + kb  那么s再走a步即为入口处 此时定义一个指针从头开始走a步 与s 在入口出汇合
////  这里用哈希表的方式也可以顺利的解决
////时间复杂度：O（n）线性 空间复杂度O(1) 常数
////作者：Mxd
////时间：2020/05/26
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode(int x) : val(x), next(NULL) {}
//};
// 
//class Solution {
//public:
//    ListNode* detectCycle(ListNode* head) {
//        if (head == nullptr)
//            return nullptr;
//        ListNode* m;
//        ListNode* k;//这里将快指针慢指针和二次指针进行了混合使用
//        m = head;
//        k = head->next;
//        bool flag = true;
//        while (k != nullptr)
//        {
//            cout << m->val << "---" << k->val << endl;
//            if (k == m)
//            {
//                if (flag)
//                {
//                    m = head;
//                    k = k->next;
//                    flag = false;
//                    continue;
//                }
//                else
//                    return m;
//            }
//            if (k->next == nullptr)
//                return nullptr;
//            k = k->next;
//            if(flag) //没有第一次相遇快指针走两步 //第一次相遇后快指针走一步 及转变为慢指针
//                k = k->next;
//            m = m->next;
//        }
//        return nullptr;
//    }
//};
//int main()
//{
//    vector<int> nums = { 3,2,0,-4,7,9,15 };
//    int pos = 0;
//    vector<ListNode*> NodeList;
//    for (auto item : nums)
//    {
//        ListNode* node = new ListNode(item);
//        if (NodeList.size() > 0)
//            NodeList[NodeList.size() - 1]->next = node;
//        NodeList.push_back(node);
//    }
//    NodeList[NodeList.size() - 1]->next = NodeList[pos];
//
//    Solution S;
//    S.detectCycle(NodeList[0]);
//
//}