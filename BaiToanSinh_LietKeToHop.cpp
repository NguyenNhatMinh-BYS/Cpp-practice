#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1001];
// khoi tao
void init(){
	for(int i =1;i<=k;i++){
		a[i]=i;
	}
	
}
// check 
bool check(){
	for(int i =1;i<=k;i++){
		if(a[i]!=n-k+i) return false;
	}
	return true;
}
//in
void in(){
	for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	cout<<endl;
}
// new
void genNew(){
	init();
	
	while(!check()){
		int check=0;
		for(int i =1;i<k;i++){
			if(a[i]==a[i+1]) {
				check=1;break;
			}
		}
		if(check==0) in();
		for(int i=k;i>=1;i--){
			if(a[i]!=n-k+i){
				a[i]+=1;
				for(int j=i+1;j<=k;j++){
					a[j]-=1;
				}
//				cout<<a[i]<<" ";
				break;
			}
		}
	}
	in();
}



int main(){
	cin>>n>>k;
	genNew();
}
