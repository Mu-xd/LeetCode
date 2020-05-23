#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //for (int i = 0; i < matrix.size(); i++)
        //{
        //    for (int j = i; j < matrix[i].size() - i -1; j++)
        //    {
        //        int x = matrix[i][j];
        //        matrix[i][j] = matrix[matrix.size() - 1 - j][i];
        //        matrix[matrix.size() - 1 - j][i] = matrix[matrix.size() - 1 - i][matrix.size() - 1 - j];
        //        matrix[matrix.size() - 1 - i][matrix.size() - 1 - j] = matrix[j][matrix.size() - 1 - i];
        //        matrix[j][matrix.size() - 1 - i] = x;
        //    }
        //}
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix.size()/2; j++)
            {
                int x = matrix[i][j];
                matrix[i][j] = matrix[i][matrix.size() - 1 - j];
                matrix[i][matrix.size() - 1 - j] = x;
            }
        }
        for (int i = 0; i < matrix.size() - 1; i++)
        {
            for (int j = 0; j < matrix.size()  - i - 1; j++)
            {
                int x = matrix[i][j];
                matrix[i][j] = matrix[matrix.size() - 1 - j][matrix.size() - 1 - i];
                matrix[matrix.size() - 1 - j][matrix.size() - 1 - i] = x;
            }
        }
    }
};
int main()
{
    vector<vector<int>> matrix = {
        {5, 1, 9,11},
        {2, 4, 8,10},
        {13, 3, 6, 7},
        {15,14,12,16}};
    Solution S;
    S.rotate(matrix); 
}