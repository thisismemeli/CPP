/* The program takes a string as input. The input string may contain spaces. 
Extract all numbers from this string and return the result as a new string.
Submit solution as a function: std::string ExtractDigits(const std::string& s) */

std::string ExtractDigits(const std::string &s) 
{
    std::string answer = "";

    for (int i = 0; i < s.length(); ++i) 
    {
        if (isdigit(s[i]))
            answer += s[i];

    }
    return answer;

}
