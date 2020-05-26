////----------------------------------------------------------
////LeetCode146  LRU�������
////˼·��
////  ˫����+��ϣ�� 
////�ؼ��㣺��ֵ����ϣ�� + ���ı��������  O(1) 
////���ߣ�Mxd
////ʱ�䣺2020/05/25
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<list>
//using namespace std;
//
//struct LinkNode      //�ڵ���(����д��)
//{
//    LinkNode(int key, int value) { this->key = key; this->value = value; };
//    int key;
//    int value;
//    LinkNode* _next;    //���ָ��
//    LinkNode* _prev;      //ǰ��ָ��  ǰ��ָ����Ϊ�˱��ڽ������
//};
//
//class LRUCache {
//private:
//    int _capacity;
//    LinkNode* _Head;
//    LinkNode* _Tail;
//    unordered_map<int, LinkNode*> _DicKV;
//    void insert(int key, int value)
//    {
//        _Tail->_next = new LinkNode(key, value);
//        _Tail->_next->_prev = _Tail;
//        _Tail = _Tail->_next;
//        _Tail->_next = new LinkNode(0, 0);
//        _DicKV[key] = _Tail;
//    }
//public:
//    LRUCache(int capacity) {
//        _capacity = capacity;
//        _Head = new LinkNode(0, 0);
//        _Tail = new LinkNode(0, 0);
//        _Head = _Tail;
//    }
//
//    int get(int key) {
//        auto it = _DicKV.find(key);
//        if (it != _DicKV.end())
//        {
//            //ÿ�β鵽Ԫ�ص�ʱ�� �������Ԫ�ط��ڶ��е�β��
//            if (_DicKV[key] != _Tail)
//            {
//                _DicKV[key]->_next->_prev = _DicKV[key]->_prev;
//                _DicKV[key]->_prev->_next = _DicKV[key]->_next;
//                _Tail->_next = _DicKV[key];
//                _DicKV[key]->_prev = _Tail;
//                _DicKV[key]->_next = new LinkNode(0, 0);
//                _Tail = _DicKV[key];
//            }
//            return _DicKV[key]->value;
//        }
//        return -1;
//    }
//
//    void put(int key, int value) {
//        if (get(key) != -1)//getʱ���Ѿ������˸��²���
//        {
//            _DicKV[key]->value = value;
//            return;
//        }
//        if (_DicKV.size() >= this->_capacity)//����� �ͽ���ǰ�������ɾ��
//        {
//            _DicKV.erase(_Head->_next->key);
//            _Head->_next->_next->_prev = _Head;
//            _Head->_next = _Head->_next->_next;
//        }
//        this->insert(key, value);
//        
//    }
//};
//
//int main()
//{
//    LRUCache cache = LRUCache(3 /* �������� */);
//
//    cache.put(1, 1);
//    cache.put(2, 2);
//    cache.put(3, 3);
//    cache.put(4, 4);
//    cout << cache.get(4) << endl;
//    cout << cache.get(3) << endl;
//    cout << cache.get(2) << endl;
//    cout << cache.get(1) << endl;
//    cache.put(5, 5);
//    cout << cache.get(1) << endl;
//    cout << cache.get(2) << endl;
//    cout << cache.get(3) << endl;
//    cout << cache.get(4) << endl;
//    cout << cache.get(5) << endl;
//}