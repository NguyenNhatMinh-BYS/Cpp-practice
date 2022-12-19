#include<bits/stdc++.h>
using namespace std;
int n,a[1001];
// init
void init(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
// check end
bool check(){
	for(int i =1;i<=n;i++){
		if(a[i]!=n-i+1) return false;
	}
	return true;
}
//in
void print(){
	for(int i =1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
// swap()
void Swap(int &x,int &y){
	int tmp =x;
	x=y;
	y=tmp;
}
// sort
void Sort(int x){
	for(int i =x ;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]) Swap(a[i],a[j]);
		}
	}
}
// next generate 
 
void genNext(){
	init();
	while(!check()){
		print();
		int check=0;
		for(int i=n;i>=1;i--){
			if(a[i]<a[n] ){
			check =i;
			break;	
			} 
		}
		int b=n;
		while(check==0){
			b--;
			for(int i =b;i>=1;i--){
				if(a[i]<a[b]){
					check=i;
					break;
				}
			}
		}
		
		
		Swap(a[b],a[check]);
		Sort(check+1);
		
	}
	print();
}
int main(){
	cin>>n;
	genNext();
}
