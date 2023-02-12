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
