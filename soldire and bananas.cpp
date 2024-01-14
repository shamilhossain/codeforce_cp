#include<bits/stdc++.h>
using namespace std;

int main(){
int k,n,w,s=0,i,res=0;

cin >> k>>n>>w;

for(i=1; i<=w; i++){
    s+=(i*k);
}
if(s<= n){
		cout <<0<<"\n";
	}
	else {
            res=s-n;
            cout << abs(res) << "\n";}
   /*res= n-s;
   cout << abs(res)<<endl;*/



return 0;
}
