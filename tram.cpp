#include<bits/stdc++.h>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int capacity=0;
	 int s=0;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a>>b;
		 s-=a;
		 s+=b;
		 capacity=max(capacity,s);

	 }
	 cout<<capacity;

	return 0;
}


