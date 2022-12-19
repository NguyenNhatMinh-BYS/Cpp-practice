#include<bits/stdc++.h>
using namespace std;
int sophantu( string s){
	int n=0;
	string tmp;
	string dem;
	stringstream ss(s);
	while(ss>>tmp){
		n++;
	}
	if(n%2==0) return 1; //chan =1
	return 0; // le =0
//	cout<<n<<endl;
}
int soluong(string s){
	int n=0;
	int c=0,l=0;
	string tmp;
	string dem;
	stringstream ss(s);
	while(ss>>tmp){
		int x=tmp[tmp.length()-1]-'0';
		if(x%2==0) c++;
		else l++;
		
	}
	

	
	if(c>l) return 1;
	else return 0;
	
}


int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if((sophantu(s)==1 && soluong(s)==1) ||(sophantu(s)==0 && soluong(s)==0))
		cout<<"YES";
		else cout<<"NO";
	sophantu(s);
	soluong(s);
	
		cout<<endl;
		
	}
} 
