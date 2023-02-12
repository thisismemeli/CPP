/*Write the function max_element, which takes as input matrix and returns the indices (row and column numbers) of the first occurrence maximum element when considering the elements of the matrix line by line.
The function header should be like this:
std::pair<size_t, size_t> max_element(const std::vector<std::vector<int>>& matrix)*/


#include <vector>
#include <algorithm>

std::pair<size_t, size_t> max_element(const std::vector<std::vector<int>>& matrix)
{
    std::pair<size_t, size_t> output;
    int max_num = matrix[0][0];
    int i;
	int j;
    
    for(i = 0; i < matrix.size(); i++)
    {
        for(j = 0; j < matrix[0].size(); j++)
        {
            if(matrix[i][j] > max_num)
            {
                max_num = matrix[i][j];
                output.first = i;
                output.second = j;
            }
        }
    }
    return output;
}
