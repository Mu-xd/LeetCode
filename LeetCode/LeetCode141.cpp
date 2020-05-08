//#include <iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//    ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
// 
//class Solution {
//public:
//	//方法1 快慢指针（双指针）
//	//bool hasCycle(ListNode* head) {
//	//	ListNode* m;
//	//	ListNode* k;
//	//	m = head;
//	//	k = head->next;
//	//	while (k == nullptr)
//	//	{
//	//		if (k == m)
//	//			return true;
//	//		if (k->next == nullptr)
//	//			return false;
//	//		k = k->next->next;
//	//		m = m->next;
//	//	}
//	//	return false;
//	//}
//	//方法2 自己指向自己
//	bool hasCycle(ListNode* head) {
//		while (head != NULL && head->next != NULL)
//		{
//			if (head->next != head)
//			{
//				head->next = head->next->next;
//				head = head->next;
//			}
//			else
//				return true;
//		}
//		return false;
//	}
//};
//int main()
//{
//
//}