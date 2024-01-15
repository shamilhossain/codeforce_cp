#include<bits/stdc++.h>

using namespace std;
int main(){

long long int n;
int c=0,s=0;
cin>>n;

while(n!=0){
    s=n%10;

    if(s==4 || s==7){
    c++;}
    n=n/10;


}



if(c==4 || c==7){
    cout<<"YES";

}
else{
    cout<<"NO";
}

return 0;

}
