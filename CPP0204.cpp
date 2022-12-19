#include<bits/stdc++.h>
using namespace std;
	long long sang[1000001];
void snt(){
	for(long long  i =0 ;i<1000001;i++) sang[i]=1;
	sang[0]=sang[1]=0;
	for(long long  i = 0 ; i< 100001;i++){
		if(sang[i]){
			for(long long  j= i*i;j<100001;j+=i) sang[j]=0;
		}
	}
} 
int main(){
	snt();
	long long  t; cin>>t;
	while(t--){
		long long  l,r,check = 0;
		cin>>l>>r;
		for(long long  i= l;i<=r;i++){
			if(sang[i]) check++;
		}
		cout<<check<<endl;
	}
	
}
