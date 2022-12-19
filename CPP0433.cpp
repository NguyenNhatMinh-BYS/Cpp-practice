#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long,long long> p1 , pair<long long,long long> p2){
	if(p1.second>p2.second) return 1;
	if(p1.second<p2.second) return 0;
	if(p1.first<p2.first) return 1;
	if(p1.first>=p2.first) return 0;
}
int main(){
	long long  t;
	cin>>t;
	while(t--){
		long long  n;
		cin>>n;
		long long a;
		map<long long ,long long > m;
		vector<pair<long long ,long long >> v;
		for(long long i =0;i<n;i++) {
			cin>>a;
			m[a]++;
		}
		for(auto x : m) v.push_back(x);
		
		sort(v.begin(),v.end(),cmp);
		for(auto x: v){
			while(x.second--){
				cout<<x.first<<" ";
			}
			
		}
		cout<<endl;
	}
	}
	
