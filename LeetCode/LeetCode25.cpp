//#include <iostream>
//#include <vector>
//using namespace std;
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
// 
//class Solution {
//public:
//    //简单的用for循环来控制交换
//    //第一个和第k个交换 第二个和第k-1个交换  依次类推
//    ListNode* reverseKGroup1(ListNode* head, int k) {
//        //当前指针结点指向头节点的前一个结点
//        ListNode *p1 = (ListNode*)malloc(sizeof(ListNode));
//        ListNode* res = p1;
//        //让p1的下一个结点指向头节点
//        p1->next = head;
//        //循环判断当当前指针结点的下一个结点为空时结束循环
//        while (p1->next != NULL)
//        {
//            //进行k/2次循环 依次交换第i个和第k-i个 
//            int i = 0;
//            for (; p1->next != NULL && i < k / 2 ;i++)
//            {
//                //指向目标结点
//                ListNode* p2 = p1->next;
//                //让p2指向目标结点 上一个结点
//                int j = k - 2*i - 1;
//                for (; p2->next!= NULL&& j > 1; j--)
//                {
//                    p2 = p2->next;
//                }
//                //p2指针成功指向了目标结点 //交换结点
//                if (j == 1 && p2->next != NULL)
//                {
//                    //临时的结点用于交换
//                    ListNode* temp1 = (ListNode*)malloc(sizeof(ListNode));
//                    ListNode* temp2 = (ListNode*)malloc(sizeof(ListNode));
//                    temp1 = p1->next;
//                    temp2 = p2->next;
//                    //交换相邻的两个和不相邻的分开处理
//                    if (k - 2 * i == 2)
//                    {
//                        p1->next = p2->next;
//                        temp1->next = temp2->next;
//                        p1->next->next = temp1;
//                    }
//                    else
//                    {
//                        p2->next = temp2->next;
//                        p1->next = temp1->next;
//                        temp2->next = p1->next;
//                        p1->next = temp2;
//                        temp1->next = p2->next;
//                        p2->next = temp1;
//                    }
//                    //让p1指向下一个结点
//                    p1 = p1->next;
//                }
//                //没有找到要交换的结点 说明交换结束
//                else
//                {
//                    return res->next;
//                }
//            }
//            for (;i < k; i++)
//            {
//                p1 = p1->next;
//            }
//        }
//        return res->next;
//    }
//    //交换每一组的第i个和第k-i个-
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        if (head == nullptr || head->next == nullptr) return head;
//        ListNode* ans = new ListNode(0);
//        ans->next = head;
//        head = ans;
//        while (head->next != nullptr)
//        {
//            int a = k/2; //这在一组中无论是基数还是偶数都只需要交换k/2次
//            for (int i = 0; i < a; i++)
//            {
//                auto e = head;
//                for (int j = 0; j < k - 2 * i - 1; j++)//交换的是第i个和第k-i个-
//                {
//                    e = e->next;
//                    if (e == nullptr)
//                        return ans->next;
//                }
//                if(e->next == nullptr)//要交换的结点时空结点 则返回就可以了
//                    return ans->next;
//                //在这里交换head->next 和 h->next
//                if (head->next == e)//处理相邻结点的问题
//                {
//                    auto temp = e->next->next;
//                    head->next = e->next;
//                    head->next->next = e;
//                    e->next = temp;
//                }
//                else
//                {
//                    auto tempe = e->next, temph = head->next;
//                    auto tempe1 = e->next->next, temph1 = head->next->next;
//                    head->next = tempe;
//                    e->next = temph;
//                    tempe->next = temph1;
//                    temph->next = tempe1;
//                }
//                cout << head->next->val << ":" << e->next->val << endl;
//                head = head->next;
//            }
//            for (int i = 0; i < k - a;i++)
//            {
//                head = head->next;
//            }
//        }
//        return ans->next;
//    }
//private:
//    ListNode* swap(ListNode* head,int k)
//    {
//    }
//};
//
//int main()
//{
//    vector<int> ss({ 1,2,3,4,5 });
//    int k = 3;
//    ListNode* head = (ListNode*)malloc(sizeof(ListNode) * ss.size());
//    head->next = NULL;
//    ListNode* p1 = head;
//    p1->val = ss[0];
//    for (int i = 1; i < ss.size(); i++)
//    {
//        ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
//        temp->val = ss[i];
//        temp->next = NULL;
//        p1->next = temp;
//        p1 = p1->next;
//    }
//    Solution res;
//    head = res.reverseKGroup(head,k);
//    while (head!= NULL)
//    {
//        std::cout << head->val<<",";
//        head = head->next;
//    }
//}