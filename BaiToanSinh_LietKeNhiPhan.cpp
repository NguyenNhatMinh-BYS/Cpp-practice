#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1001];
// khoi tao
void init(){
	for(int i =0 ;i <n;i++ ){
		a[i]=0;
	}
}
// kiem tra
bool check(){
	for(int i=0;i<n;i++){
		if(a[i]==0) return false;
	}
	return true;
}
// in 
void print(){
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
// khoi tao;
void getNew(){
	init();
	while(!check()){
		print();
//		for(int i =0;i<n-1;i++){
//			if((a[i]==1 && a[i+1]==1)||(a[i]==0 && a[i+1]==0)){
//				print();
//				break;
//			}
//		}
		for(int i = n-1;i>=0;i--){
			if(a[i]==0) {
				a[i]=1;
				m=i;
				for(int j =i+1 ;j<n;j++){
					a[j]=0;
				}
				break;
			}
		}
	}
	print();
}




int main(){
	cin>>n;
	getNew();
}
