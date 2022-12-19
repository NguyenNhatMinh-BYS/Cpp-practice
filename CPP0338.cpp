#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		
		string a;
		int n,check=0;
		cin>>a>>n;
		for(int i = 0 ;i<a.size();i++){
		set<char> s;
		for(int j = i ;j<a.size();j++){
			s.insert(a[j]);
			if(s.size()==n) check++;
			if(s.size()>n){
				break;
			}
		}
		}
		cout<<check<<endl;
	}
}
