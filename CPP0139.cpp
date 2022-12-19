#include<bits/stdc++.h>
using namespace std;
long long snt(long long b){
	for(int i=2;i<=sqrt(b);i++){
		if(b%i==0) return 0;
	}
	return 1;
}
long long tach(long long b){
	long long a=b,c=0;
	while(a>0){
		c+=a%10;
		a/=10;
	}
	return c;
}
long long sum(long long b){
	long long c=b,i=2,result=0;
	while(c>1){
	
		while(c%i==0){
			if(snt(i)){
				result+=tach(i);
//				cout<<"i:"<<i<<" ";
			}
			c/=i;
			
		}
		i++;
	}
	return result;
}
int main(){
	int a;
	cin>>a;
	while(a--){
		long long b;
		cin>>b;
//		cout<<tach(b)<<" "<<sum(b);
		if(snt(b)==0 && tach(b)==sum(b) ) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
