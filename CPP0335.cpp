#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	vector<string> v;
	while(cin>>s) v.push_back(s);
	
	int check = 0;
	for(auto x : v) {
		int dem = 0;
		for(int i = 0 ;i <x.length();i++){
			x[i]=tolower(x[i]);
			if(x[i]=='!'||x[i]=='?'||x[i]=='.') dem++;
		}
		if(dem==x.length()) continue;
		if(check == 0){
			
			x[0]=toupper(x[0]);
			check=1;
			
		}
		string xx=x; 
	for(int i = 0 ;i<xx.length();i++){
		if(x[x.length()-1]=='!'||x[x.length()-1]=='?'||x[x.length()-1]=='.'){
			x.erase(x.length()-1,1);
			check = 0;
		}
	}
		
		cout<<x<<" ";
		if(check ==0) cout<<endl;
	}
}

