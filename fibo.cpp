#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	while(a--){
		int t;cin>>t;
		if(t==1 || t ==2){
			cout<<1<<endl;
			continue;
		}
		else if(t==0) {
			cout<<0<<endl;
			continue;
		}
		else{
			long long f0=0,f1=1,fn;
			for(int i = 2;i<=t;i++){
				fn=f1+f0;
				f0=f1;
				f1=fn;
			}
			cout<<fn;
		}
		cout<<endl;
	}
	
}
