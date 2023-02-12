#include <iostream>
#include <vector>

using namespace std;

std::string join(const std::vector<std::string>& tokens, char delimiter)
{
    string str = "";
    int size = tokens.size();
    for (int i = 0; i < size; i++)
    {
        str += tokens[i];
        if (i < size - 1)
            str += delimiter;
    }
    return str;
}
