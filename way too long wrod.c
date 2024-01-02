#include <iostream>

using namespace std;

int main()
{
    int n,i;
    string s;
    cin >> n;
    for(i=0;i<=n;i++)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[1] << s.length() - 1 << s[s.length()] << end;
        }
        else
        {
            cout << s << end;
        }
    }
    return 0;
}
