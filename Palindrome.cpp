/*A string consisting of lowercase Latin letters and spaces is given. Check whether it is a palindrome without spaces (eg, "no lemon no melon").
The solution has to include functional decomposition. Failure to follow the decomposition requirements will result in the lower score, even if the solution gets "OK" from the contest checker.
Requirement: Implement the solution as a function that takes a string as input and returns true/false depending on whether the string is a palindrome or not. Use this function in the function `main()` to solve the problem.
Input format
The input is 1 line of not more than 100 characters, including spaces. There can be an arbitrary number of spaces between words.
Output format
Output "yes" if the given string is a palindrome, and "no" otherwise.*/

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
