#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	long long b;
	while(a--){
		cin>>b;
		if(b%100==86) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
