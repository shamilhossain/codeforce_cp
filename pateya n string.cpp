#include<string>
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main(){
int i;
char c1,c2;
string s1,s2;

cin >> s1>> s2;

for(i=0; i<s1.length(); i++){


     c1=tolower(s1[i]);
     c2=tolower(s2[i]);

    if(c1 > c2){
        cout << "1"<<endl;
        return 0;
    }
     else if(c1 < c2){
        cout<< "-1"<< endl;
        return 0;
    }

}
cout << "0"<<endl;

    return 0;
}
