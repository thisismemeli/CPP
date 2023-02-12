#include <iostream>
#include <string>


bool isPalindrome(std::string& str)
{
    int len;
    bool boolPalindrom = true;
    len = str.length();
    std::string strNew = "";
    for (int i = 0; i < len; i++)
        if (str[i] != ' ')
            strNew += str[i];
    int lenNew = strNew.size();
    for (int i = 0; i < lenNew - 1; i++)
        if (strNew[i] != strNew[(lenNew - 1) - i])
            boolPalindrom = false;
    return boolPalindrom;
}

int main()
{
    std::string str;
    getline(std::cin, str);
    if (isPalindrome(str))
        std::cout << "yes" << "\n";
    else
        std::cout << "no" << "\n";
    return 0;
}
