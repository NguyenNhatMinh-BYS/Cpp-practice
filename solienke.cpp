#include<iostream>
using namespace std;
int main(){
	long long a,t;
	cin>>a;
	while(a--){
		cin>>t;
		int d=0;
		int check=t%10;
		t=t/10;
		while(t>0){
			int c=t%10;
			if(check+1==c||check-1==c){
				check=c;
			}
			else if(check+1!=c||check-1!=c){
				d=1;
				cout<<"NO\n";
				break;
			}
			t/=10;
		}
		if(d==0){
			cout<<"YES\n";
		}
	}
	
}
