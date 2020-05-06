#include <iostream>
#include <unordered_map>
using namespace std;
class Node {
public:
	int val;
	Node* next;
	Node* random;

	Node(int _val) {
		val = _val;
		next = NULL;
		random = NULL;
	}
};
class Solution {
public:
	//���俴��ͼ ת��Ϊͼ����� ���ù�ϣ��
	Node* copyRandomList(Node* head) {
		Node* res = copyNode(head);
		return res;
	}
private:
	//����һ����ϣ�������жϽڵ��Ƿ񴴽��ɹ�
	unordered_map<Node *, Node *> hash;
	Node* copyNode(Node* Head)
	{
		//����ڵ�Ϊ��������ݹ�
		if (Head == NULL)
		{
			return NULL;
		}
		//�������ڵ㹹���� ��ֱ�ӷ���
		if (hash.find(Head) != hash.end())
		{
			return hash[Head];
		}
		Node* node = new Node(Head->val);
		hash[Head] = node;
		node->next = copyNode(Head->next);
		node->random = copyNode(Head->random);
		return node;
	}

};
int main()
{
	int  f[][2] = { {7,-1},{13,0},{11,4},{10,2},{1,0}};
	unordered_map<int, Node*> hash;
	Node* Head = new Node(f[0][0]);
	auto r = Head;
	hash[0] = Head;
	//����next
	for (int i = 1; i < end(f) - begin(f); i++)
	{
		Head->next = new Node(f[i][0]);
		//�����ǰ�ڵ�û�б���ʼ�� ���ʼ������ڵ�
		if (hash.find(i) == hash.end())
			hash[i] = Head;
		Head = Head->next;
	}
	Head = r;
	//�������ָ��
	for (int i = 0; i < end(f) - begin(f); i++)
	{
		if (f[i][1] == -1)
			Head->random = nullptr;
		else
			Head->random = hash[f[i][1]];
		Head = Head->next;
	}
	Solution S;
	auto res = S.copyRandomList(r);
	;
}