#include <iostream>
using namespace std;

void firstandlastindex(string s, char ch, int *first, int *last)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            *first = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ch)
        {
            *last = i;
            break;
        }
    }
}

int main()
{
    string s = " aaacad ";
    char ch = 'a';
    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;

    firstandlastindex(s, ch, pf, pl);

    cout << *pf << " " << *pl << endl;
    cout << first << " " << last << endl;
    return 0;
}