#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t ;
	cin>>t;
	while(t--){
		long long  n,m,p;
		cin>>n>>m>>p;
		long long a[n],b[m],c[p];
		for(int i =0 ;i<n;i++) cin>>a[i];
		for(int i =0 ;i<m;i++) cin>>b[i];
		for(int i =0 ;i<p;i++) cin>>c[i];
		vector<long long > u(n+m);
		auto it = set_intersection(a,a+n,b,b+m,u.begin());
		u.resize(it-u.begin());
//		for(auto x : u) cout<<x<<" ";
		it = set_intersection(u.begin(),u.end(),c,c+p,u.begin());
		u.resize(it-u.begin());
		int check =0;
		for(auto x : u){
			check =1;
			cout<<x<<" ";
		} 
		if(check==0) cout<<-1;
		cout<<endl;
	} 
}

 
