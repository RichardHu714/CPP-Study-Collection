#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long s;
	cin>>n;
	if(n%2==0){
	    n=n-1;
	}
	s=(1+n)*((n+1)/2)/2;
	cout<<s<<endl;
	return 0;
}
