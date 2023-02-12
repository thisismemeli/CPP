#include <iostream>
#include <vector>


void swap_columns(std::vector<std::vector<int>>& matrix, size_t i, size_t j)
{
    int matrix0;
    for (int r = 0; r < matrix.size(); r++)
    {
        matrix0 = matrix[r][i];
        matrix[r][i] = matrix[r][j];
        matrix[r][j] = matrix0;
    }
}
