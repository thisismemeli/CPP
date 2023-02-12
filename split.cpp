/* Write a split function in C++ with the following prototype:
std::vector<std::string> split(const std::string& str, char delimiter);
The function must return the vector of strings obtained by splitting the string str 
into parts by the specified delimiter character. If the separator is encountered at the beginning 
or at the end of the line, then at the beginning (respectively, at the end) of the vector with the result there must be an empty string. 
If two separators meet next to each other, then an empty string between them should also be returned.*/

#include <iostream>
#include <vector>
#include <string>


std::vector<std::string> split(const std::string &str, char delimiter) 
{
    
	std::vector<std::string> v;
    int start = 0, end = str.find(delimiter);

    while (end != std::string::npos) 
    {
        v.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(delimiter, start);
    }
    v.push_back(str.substr(start, end - start));

	return v;

}
