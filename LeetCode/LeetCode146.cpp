////----------------------------------------------------------
////LeetCode146  LRU缓存机制
////思路：
////  双链表+哈希表 
////关键点：键值（哈希表） + 灵活的变更（链表）  O(1) 
////作者：Mxd
////时间：2020/05/25
////-----------------------------------------------------------
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<list>
//using namespace std;
//
//struct LinkNode      //节点类(建议写法)
//{
//    LinkNode(int key, int value) { this->key = key; this->value = value; };
//    int key;
//    int value;
//    LinkNode* _next;    //后继指针
//    LinkNode* _prev;      //前驱指针  前驱指针是为了便于交换结点
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
//            //每次查到元素的时候 都将这个元素放在队列的尾部
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
//        if (get(key) != -1)//get时候已经进行了更新操作
//        {
//            _DicKV[key]->value = value;
//            return;
//        }
//        if (_DicKV.size() >= this->_capacity)//溢出了 就将最前面的数据删除
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
//    LRUCache cache = LRUCache(3 /* 缓存容量 */);
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