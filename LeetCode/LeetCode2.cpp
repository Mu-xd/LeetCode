//#include <iostream>
//using namespace std;
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode* Node = new ListNode(0);
//		ListNode* Res = Node;
//		int flag = 0;//进位标志
//		while (l1 != NULL && l2 != NULL)
//		{
//			Node->next = new ListNode((l1->val + l2->val + flag)%10);
//			flag = (l1->val + l2->val + flag) / 10;
//			Node = Node->next;
//			l1 = l1->next;
//			l2 = l2->next;
//		}
//		if (l2 != NULL)
//		{
//			l1 = l2;
//		}
//		while (l1 != NULL)
//		{
//			Node->next = new ListNode((l1->val + flag) % 10);
//			flag = (l1->val + flag) / 10;
//			Node = Node->next;
//			l1 = l1->next;
//		}
//		if(flag != 0)
//			Node->next = new ListNode(flag);
//		return Res->next;
//	}
//};
//int main()
//{
//	int num1[] = { 1 };
//	int num2[] = { 9,9};
//	auto H1 = new ListNode(num1[0]);
//	auto Node = H1;
//	for (int i = 1; i < end(num1) - begin(num1); i++)
//	{
//		Node->next = new ListNode(num1[i]);
//		Node = Node->next;
//	}
//	auto H2 = new ListNode(num2[0]);
//	Node = H2;
//	for (int i = 1; i < end(num2) - begin(num2); i++)
//	{
//		Node->next = new ListNode(num2[i]);
//		Node = Node->next;
//	}
//	Solution S;
//	auto res = S.addTwoNumbers(H1, H2);
//	while (res != NULL)
//	{
//		cout << res->val;
//		res = res->next;
//	}
//}