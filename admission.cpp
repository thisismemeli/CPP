/*
Important: this task will have code review. You should follow the instruction, which is located here: https://clck.ru/TikNf 

Develop a program that distributes students to universities
Each university has a limit of places, each applicant has a certain score and a list of preferences.
The distribution is as follows: applicants are sorted by score in descending order, when score
is equal - by date of birth, surname and name in increasing order.
Then, each applicant goes to the first university from his list, which has vacant places left 
(if there are no such places, then goes nowhere).
Input format

The first line contains a single integer N from 1 to 104 - the number of universities.
The next N lines contain a string of Latin letters from 5 to 15 characters and a number from 0 to 109 - 
the name and the maximum number of students for the next university.
The next line contains an integer M from 0 to 104 - the number of applicants.
Next come the M lines, each of which contains two words from 5 to 15 characters - 
the name and surname of the next applicant, then 3 integers from 0 to 109 - day, month and year of birth, an integer from 0 to 109 is a student's score,
an integer k from 0 to 200 is the number of universities to which the applicant is ready to enroll, and k of university names
Output format

For each university, print its name in alphabetical order, then, through tabulation, 
the first and last names of the students who entered it, sorted by surname, name and date of birth.
*/

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::map;
using std::pair;
using std::sort;
using std::string;
using std::vector;

struct Applicant
{
    string first_name, last_name;
    int date_b{}, month_b{}, year_b{}, score{}, enroll{};
    vector<string> unis;
};

bool applicantsSort(const Applicant& first, const Applicant& second)
{
    if (first.score > second.score)
    {
        return true;
    }
    else if (first.score < second.score)
    {
        return false;
    }
    else
    {
        if (first.year_b > second.year_b)
        {
            return true;
        }
        else if (first.year_b < second.year_b)
        {
            return false;
        }
        else
        {
            if (first.month_b > second.month_b)
            {
                return true;
            }
            else if (first.month_b < second.month_b)
            {
                return false;
            }
            else
            {
                if (first.date_b > second.date_b)
                {
                    return true;
                }
                else if (first.date_b < second.date_b)
                {
                    return false;
                }
                else if (first.date_b == second.date_b)
                {
                    if (first.first_name > second.first_name)
                    {
                        return true;
                    }
                    else if (first.first_name < second.first_name)
                    {
                        return false;
                    }
                    else
                    {
                        if (first.last_name > second.last_name)
                        {
                            return true;
                        }
                        else if (first.last_name < second.last_name)
                        {
                            return false;
                        }
                    }
                }
            }
        }
    }
}

bool sortAnswer(const Applicant& first, const Applicant& second)
{
    if (first.last_name < second.last_name)
    {
        return true;
    }
    else if (first.last_name > second.last_name)
    {
        return false;
    }
    if (first.first_name < second.first_name)
    {
        return true;
    }
    else if (first.first_name > second.first_name)
    {
        return false;
    }
    if (first.year_b < second.year_b)
    {
        return true;
    }
    else if (first.year_b > second.year_b)
    {
        return false;
    }
    if (first.month_b < second.month_b)
    {
        return true;
    }
    else if (first.month_b > second.month_b)
    {
        return false;
    }
    if (first.date_b < second.date_b)
    {
        return true;
    }
    else if (first.date_b > second.date_b)
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    map<string, int> uni;
    for (int i = 0; i < n; i++)
    {
        string name;
        int k;
        cin >> name >> k;
        uni.insert(pair<string, int>(name, k));
    }

    cin >> n;
    vector<Applicant> applicants;
    Applicant appl[n];
    for (int i = 0; i < n; i++)
    {
        cin >> appl[i].first_name >> appl[i].last_name;
        cin >> appl[i].date_b >> appl[i].month_b >> appl[i].year_b;
        cin >> appl[i].score >> appl[i].enroll;
        for (int j = 0; j < appl[i].enroll; j++)
        {
            string name;
            cin >> name;
            appl[i].unis.push_back(name);
        }
        applicants.push_back(appl[i]);
    }

    map<string, vector<Applicant>> unisAndStudents;
    sort(applicants.begin(), applicants.end(), applicantsSort);
    for (auto& it : uni) unisAndStudents[it.first] = {};
    for (const Applicant& app : applicants)
    {
        for (const string& iuni : app.unis)
        {
            if (uni[iuni] > unisAndStudents[iuni].size())
            {
                unisAndStudents[iuni].push_back(app);
                break;
            }
        }
    }
    for (auto& it : unisAndStudents)
    {
        cout << it.first;
        sort(it.second.begin(), it.second.end(), sortAnswer);
        for (Applicant& app : it.second)
            cout << '\t' << app.first_name << ' ' << app.last_name;
        cout << '\n';
    }
    return 0;
}
