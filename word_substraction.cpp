#include<bits/stdc++.h>
using namespace std;

int main(){

int n,k,i;
 cin>> n>>k;

 for(i=0; i<k; i++){

    if(n%10!=0){
        n=n-1;
    }
    else{
        n=n/10;
    }

 }
 cout<< abs(n)<<endl;



return 0;
}
