#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fp;
	fp.open("DATA.in");
	string tmp;
	int check =0,a[1001];
	while(fp>>tmp){
		
		a[check]=stoi(tmp);
		check++;	
	}
	fp.close();
	map<int,int> m;
	for(int i =2 ;i<a[0]+2;i++){
		m[a[i]]=1;
	}
	for(int i = a[0]+2;i<check;i++){
		if(m[a[i]]==1) m[a[i]]=2;
	}
	for(auto x : m) if(x.second==2) cout<<x.first<<" ";
}
