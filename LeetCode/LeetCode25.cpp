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
//    //�򵥵���forѭ�������ƽ���
//    //��һ���͵�k������ �ڶ����͵�k-1������  ��������
//    ListNode* reverseKGroup1(ListNode* head, int k) {
//        //��ǰָ����ָ��ͷ�ڵ��ǰһ�����
//        ListNode *p1 = (ListNode*)malloc(sizeof(ListNode));
//        ListNode* res = p1;
//        //��p1����һ�����ָ��ͷ�ڵ�
//        p1->next = head;
//        //ѭ���жϵ���ǰָ�������һ�����Ϊ��ʱ����ѭ��
//        while (p1->next != NULL)
//        {
//            //����k/2��ѭ�� ���ν�����i���͵�k-i�� 
//            int i = 0;
//            for (; p1->next != NULL && i < k / 2 ;i++)
//            {
//                //ָ��Ŀ����
//                ListNode* p2 = p1->next;
//                //��p2ָ��Ŀ���� ��һ�����
//                int j = k - 2*i - 1;
//                for (; p2->next!= NULL&& j > 1; j--)
//                {
//                    p2 = p2->next;
//                }
//                //p2ָ��ɹ�ָ����Ŀ���� //�������
//                if (j == 1 && p2->next != NULL)
//                {
//                    //��ʱ�Ľ�����ڽ���
//                    ListNode* temp1 = (ListNode*)malloc(sizeof(ListNode));
//                    ListNode* temp2 = (ListNode*)malloc(sizeof(ListNode));
//                    temp1 = p1->next;
//                    temp2 = p2->next;
//                    //�������ڵ������Ͳ����ڵķֿ�����
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
//                    //��p1ָ����һ�����
//                    p1 = p1->next;
//                }
//                //û���ҵ�Ҫ�����Ľ�� ˵����������
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
//    //����ÿһ��ĵ�i���͵�k-i��-
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        if (head == nullptr || head->next == nullptr) return head;
//        ListNode* ans = new ListNode(0);
//        ans->next = head;
//        head = ans;
//        while (head->next != nullptr)
//        {
//            int a = k/2; //����һ���������ǻ�������ż����ֻ��Ҫ����k/2��
//            for (int i = 0; i < a; i++)
//            {
//                auto e = head;
//                for (int j = 0; j < k - 2 * i - 1; j++)//�������ǵ�i���͵�k-i��-
//                {
//                    e = e->next;
//                    if (e == nullptr)
//                        return ans->next;
//                }
//                if(e->next == nullptr)//Ҫ�����Ľ��ʱ�ս�� �򷵻ؾͿ�����
//                    return ans->next;
//                //�����ｻ��head->next �� h->next
//                if (head->next == e)//�������ڽ�������
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