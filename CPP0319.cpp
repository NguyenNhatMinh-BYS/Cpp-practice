#include<bits/stdc++.h>
using namespace std;


void max(string m,int s){
	
	
	
	for(int i =0;i<stoi(m);i++){
	int check =0;
		for(int j=9;j>=1;j--){
			if(s-j>=0) {
				s-=j;
				cout<<j;
				check=1;
				
				break;
			}
		}
		if(check==0) cout<<"0";
	}
	
}
void min(string m,int s){
	int c[stoi(m)];
	s=s-1;
	for(int i =stoi(m)-1;i>=0;i--){
	
	
	for(int j =9;j>=0;j--){
		if(s-j>=0){
			
			s-=j;
			c[i]=j;
		
			break;
		}
	}

}
	if(c[0]<9) c[0]=c[0]+1;
//	cout<<c[0];
	for(auto x : c) cout<<x;
}
int main(){
	string m;
	int s;
	cin>>m>>s;
	if(s>9*stoi(m)|| s == 0 && stoi(m)> 1){
		cout<<"-1 -1";
		return 0;
	}
	min(m,s);
	cout<<" ";
	max(m,s);

}
