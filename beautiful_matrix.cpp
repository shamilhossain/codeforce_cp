#include<bits/stdc++.h>
using namespace std;

int main(){

int i,j,a[10][10],s=0,c=0,r=0;


for(i=1;i<=5;i++){
    for(j=1; j<=5; j++){
        cin>>a[i][j];
    }
}
for(i=1;i<=5;i++){
    for(j=1; j<=5; j++){
if(a[i][j]==1){
    r=i;
    c=j;

}
    }
    }

s = abs(r-3)+abs(c-3);

cout<< abs(s)<<endl;
/*for(i=0;i<5;i++){
    for(j=0;j<5;j++){
    cout<<a[i][j];
  }    cout<<"\n";

}*/

}
