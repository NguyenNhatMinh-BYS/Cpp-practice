#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s,ss;
		cin>>s;
		ss=s;
//		int check=-1;
//		char c='0';
		if(is_sorted(s.begin(),s.end())){
			cout<<-1<<endl;
			continue;
		}
//		while()
//		
//	}
	int check = 0;
	while(prev_permutation(s.begin(),s.end())){
		check =0;
		for(int i = 0 ;i<s.length();i++){
		
				if(s[i]!=ss[i]) check++;
			
		}
		if(check ==2 ) break;
		
	}
	if(check ==2)
	for(auto x : s) cout<<x;
	else cout<<-1;
	cout<<endl;
}
}
