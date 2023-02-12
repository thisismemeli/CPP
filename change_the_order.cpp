/* Write a reverse function that accepts a reference to std::vector<int> 
and rearranges the array objects in reverse order.
The function header should be like this:
void reverse(std::vector<int>& numbers)*/

#include <algorithm>
#include <vector>

using std::reverse;
using std::vector;
void reverse(vector<int>& numbers)
{
  reverse(numbers.begin(), numbers.end());
}
