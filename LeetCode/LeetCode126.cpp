//----------------------------------------------------------
//LeetCode126. ���ʽ��� II
//�����������ʣ�beginWord �� endWord����һ���ֵ� wordList��
//�ҳ����д� beginWord �� endWord �����ת�����С�ת������ѭ���¹���
//ÿ��ת��ֻ�ܸı�һ����ĸ��
//ת�������е��м䵥�ʱ������ֵ��еĵ��ʡ�
//˵�� :
//���������������ת�����У�����һ�����б�
//���е��ʾ�����ͬ�ĳ��ȡ�
//���е���ֻ��Сд��ĸ��ɡ�
//�ֵ��в������ظ��ĵ��ʡ�
//����Լ��� beginWord �� endWord �Ƿǿյģ��Ҷ��߲���ͬ��
//˼·��
//
//���ߣ�Mxd
//ʱ�䣺2020/06/07
//-----------------------------------------------------------
#include <iostream>
#include <vector>
#include <regex>
#include <unordered_map>
using namespace std;

class Solution {
private:
    unordered_map<string, vector<string>> maps;
    unordered_map<int, vector<vector<string>>> anss;
    int lan;
    string end;
    void dfs1(vector<string> res,string word)
    {
        res.push_back(word);
        if (res.size() > lan)
            return;
        for (int i = maps[word].size() - 1; i >= 0; i--)
        {
            if (find(res.begin(), res.end(), maps[word][i]) != res.end())
            {
                maps[word].erase(find(maps[word].begin(), maps[word].end(),maps[word][i]));
                continue;
            }
            if (maps[word][i] == end)
            {
                res.push_back(maps[word][i]);
                lan = res.size();
                anss[res.size()].push_back(res);
            }
            else
                dfs1(res, maps[word][i]);
        }
    }
public:
    vector<vector<string>> findLadders1(string beginWord, string endWord, vector<string>& wordList) {
        //���ַ��� ��֦���� ���³�ʱ
        end = endWord;
        //����ͼ
        {
            if(find(wordList.begin(), wordList.end(),beginWord) == wordList.end())
                wordList.push_back(beginWord);
            for (string word : wordList)
            {
                for (int i = 0; i < word.size(); i++)
                {
                    string str_regex = word;
                    str_regex[i] = '.';
                    regex r(str_regex);
                    for (string str : wordList)
                    {
                        //ƥ�䵽�ַ���
                        if (str != word && regex_match(str, r))
                        {
                            maps[word].push_back(str);
                        }
                    }
                }
            }
        }
        //��·��
        lan = wordList.size();
        dfs1({}, beginWord);
        //���
        if (anss.size() == 0)
            return {};
        vector<vector<string>> ans;
        for (auto item : anss)
        {
            if (lan >= item.first)
            {
                lan = item.first;
                ans = item.second;
            }
        }
        return ans;
    }

    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
    
    }
};
int main()
{
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList = { "hot", "dot", "dog", "lot", "log", "cog" };
    auto s = Solution();
    s.findLadders(beginWord, endWord, wordList);
}