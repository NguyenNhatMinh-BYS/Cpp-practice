#include <bits/stdc++.h>

using namespace std;
int main(){
	
	
	
		string s,tmp,del;
		
		getline(cin,s);
		getline(cin,del);
		stringstream check(s);
		while(check>>tmp){
			if(tmp!=del) cout<<tmp<<" ";
		}
//		cout<<endl;
	
	
}
