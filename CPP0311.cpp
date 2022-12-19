#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int dem = 0;
		map<char,int> m;
		for(int i =0 ;i<s.length();i++){
			m[s[i]]++;
			if(m[s[i]]>dem) dem = m[s[i]];
		}
		int check =dem;
		dem =s.length();
		dem=dem%2==0?dem/2:(dem/2) +1;
		if(check<=dem) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
