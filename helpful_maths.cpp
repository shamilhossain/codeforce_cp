#include<bits/stdc++.h>
#include <cstring>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    int i,j,temp=0;


    cin>> s;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if(s[i]=='+')
            {
                continue;
            }
             if (s[i] <  s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }


        }
    }
    cout << s<< endl;
    return 0;
}





