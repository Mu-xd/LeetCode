//----------------------------------------------------------
//LeetCode126. 单词接龙 II
//给定两个单词（beginWord 和 endWord）和一个字典 wordList，
//找出所有从 beginWord 到 endWord 的最短转换序列。转换需遵循如下规则：
//每次转换只能改变一个字母。
//转换过程中的中间单词必须是字典中的单词。
//说明 :
//如果不存在这样的转换序列，返回一个空列表。
//所有单词具有相同的长度。
//所有单词只由小写字母组成。
//字典中不存在重复的单词。
//你可以假设 beginWord 和 endWord 是非空的，且二者不相同。
//思路：
//
//作者：Mxd
//时间：2020/06/07
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
        //这种方法 剪枝不够 导致超时
        end = endWord;
        //构建图
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
                        //匹配到字符串
                        if (str != word && regex_match(str, r))
                        {
                            maps[word].push_back(str);
                        }
                    }
                }
            }
        }
        //求路径
        lan = wordList.size();
        dfs1({}, beginWord);
        //求答案
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