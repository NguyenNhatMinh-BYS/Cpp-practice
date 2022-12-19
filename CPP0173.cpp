#include<bits/stdc++.h>
#include <algorithm>
#include<math.h>
using namespace std;
long long multis(long long a , long long b){
	return a*b/(__gcd(a,b));
}
int main(){
	long long  a;
	cin>>a;
	while(a--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
	
		
		n=pow(10,n-1);
		
		long long multi=multis(x,multis(y,z));
		if(multi>=n&& multi<n*10) cout<<multi;
		
		else if(multi<n){
			
			if( n%multi!=0){
//				cout<<n<<" "<<multi<<" ";
				multi*=(n/multi+1);
				cout<<multi;
			}	
			
			
				
			else
			cout<<n;
		}
		else cout<<"-1";
		cout<<endl;
	
}
}
