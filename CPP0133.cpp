#include<bits/stdc++.h>
#include<math.h> 
using namespace std;

void snt(){
	long long b;
	cin>>b;
	if(b>=2)
	for(int i=2;i<=b;i++){
		int sum=0;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				sum=1;
				break;
			}
		}
		if(sum==0) cout<<i<<" ";
	}
}
int main(){
	int a;
	cin>>a;
	while(a--){
		snt();
		cout<<endl;
	}
}
