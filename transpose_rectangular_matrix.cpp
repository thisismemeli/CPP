/*Given a two-dimensional array of size n × m (n, m <1000). The array symmetrical by the main diagonal is called transposed to original one.
Array has dimensions m × n: the rows of the original array become the columns of the transposed one. 
The columns of the original array become the rows of the transposed.
For given two-dimensional array, build the transposed one.
transpose function should have following prototype:
std :: vector <std :: vector <int > > transpose (const std :: vector <std :: vector <int > > & matrix).*/

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
