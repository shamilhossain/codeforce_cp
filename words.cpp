#include<bits/stdc++.h>

using namespace std;

int main(){
int u=0,l=0,i;
string s;

cin >> s;
  for( i=0; i<s.length(); i++){
        if(isupper(s[i])){
            u++;
        }
        else{
            l++;
        }

  }

 if (u > l) {
         transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;}

 else {  transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }


return 0;
}
