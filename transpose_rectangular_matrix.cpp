#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> transpose(
    const vector<vector<int>>& matrix)
{
    vector<vector<int>> AT;
    for (int i = 0; i < matrix[0].size(); ++i)
    {
        vector<int> row(matrix.size(), 0);
        AT.push_back(row);
        for (int j = 0; j < matrix.size(); ++j)
            AT[i][j] = matrix[j][i];
    }
    return AT;
}
