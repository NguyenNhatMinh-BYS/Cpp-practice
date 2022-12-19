#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	while(a--){
		long long t;cin>>t;
		if(t==1 || t==0 ){
			cout<<"YES"<<endl;
			continue;
		}
		
		else if(t>1){
			long long f0=0,f1=1,fn=1;
			for(long long  i = 1;i<=t;i++){
				fn=f1+f0;
				f0=f1;
				f1=fn;
				if(fn == t){
					cout<<"YES";
					break;
				}
				else if(fn>t) {
					cout<<"NO";
					break;
				}
			}
			
		}
		else cout<<"NO";
		cout<<endl;
	}
	
}
