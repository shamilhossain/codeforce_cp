
#include<bits/stdc++.h>

using namespace std;

int main(){

int n,i,x=0;

 string s;

 cin>> n;

 for(i=0;i<n;i++){
    cin>> s;

    if( s=="X++" || s=="++X"){
        x++;
    }
    else {
        x--;
    }
 }
cout<< x<< endl;

}

