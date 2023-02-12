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
