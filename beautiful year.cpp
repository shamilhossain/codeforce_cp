
#include <iostream>

using namespace std;

int main()
{
  int y,a,b,c,d;
  cin>> y;
  for(int i=0; i<9000; i++){   //1987
    y++;
    a=y/1000;
    b=y/100%10;
    c=y/10%10;
    d=y%10;
    if(a!= b && a!=c && a!=d && b!=c && b!=d && c!=d){
        break;
    }

  }
  cout <<y << endl;

  return 0;
}
