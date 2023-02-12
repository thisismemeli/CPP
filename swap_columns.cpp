/*Given a two-dimensional array and two numbers i and j. 
Change the columns in the array with i and j indexes.
A decision should be performed as the following function:
void swap_columns(std::vector<std::vector<int>>& matrix, size_t i, size_t j);*/

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
