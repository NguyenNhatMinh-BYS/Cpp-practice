#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long l,r,sum=0;
		cin>>l>>r;
		for(long long i=l;i<=sqrt(r);i++){
			int check=0;
			if(i>1){
				for(long long j=2;j<=sqrt(i);j++){
					if(i%j==0){
						check=1;
						break;
					}
				}
				if(check==0) sum++;
			}
		}
		cout<<sum<<endl;
	}
}
