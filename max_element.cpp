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
