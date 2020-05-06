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
	//将其看成图 转化为图的深拷贝 利用哈希表
	Node* copyRandomList(Node* head) {
		Node* res = copyNode(head);
		return res;
	}
private:
	//定义一个哈希表用于判断节点是否创建成功
	unordered_map<Node *, Node *> hash;
	Node* copyNode(Node* Head)
	{
		//如果节点为空则结束递归
		if (Head == NULL)
		{
			return NULL;
		}
		//如果这个节点构建过 则直接返回
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
	//处理next
	for (int i = 1; i < end(f) - begin(f); i++)
	{
		Head->next = new Node(f[i][0]);
		//如果当前节点没有被初始化 则初始化这个节点
		if (hash.find(i) == hash.end())
			hash[i] = Head;
		Head = Head->next;
	}
	Head = r;
	//处理随机指针
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