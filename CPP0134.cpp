#include<bits/stdc++.h>
#include<math.h> 
using namespace std;
void check(long long a, long long b){
	long dem =0,result=-1,x=a;
	for(int i=2;i<=sqrt(a);i++){
		
		while(x%i==0){
			x/=i;
			dem++;
			if(dem==b) {
				result=i;
				break;			
			}
		}
		if(result>0) break;
	}
	if(x>1){
		dem++;
		if(dem==b) result = x;
	}
	
	cout<<result;
}
int main(){
	long t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		
		check(a,b);
		cout<<endl;
	}
	return 0;
}
