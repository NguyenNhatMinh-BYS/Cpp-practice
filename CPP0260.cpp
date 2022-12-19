#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	int a[t][t];
	multiset<int> s;
	for(int i = 0 ; i< t*t ; i++ ){
		int n ;
		cin>>n;
		s.insert(n);
	}
	int b[t*t],p=0;
	for(auto x : s){
		b[p]=x;
		p++;
	}
	p=0;
	int doc=t,ngang=t,check=0;
	for(int i = 0 ; i<=t/2;i++){
		for(int j= check ; j<ngang;j++){
			a[i][j]=b[p];
//			cout<<a[i][j]<<" "<<endl;
			p++;
		}
//		cout<<p<<endl;
		for(int j = check+1; j <doc; j++){  
			a[j][doc-1]=b[p];
//			cout<<a[j][doc-1]<<" "<<endl;
			p++;
		}
//		cout<<p<<endl;
		for(int j = ngang -2; j >=check;j--){
			a[ngang-1][j]=b[p];
//			cout<<a[ngang-1][j]<<" "<<endl;
			p++;
		}
//		cout<<p<<endl;
		for(int j = doc -2 ; j>check;j--){
			a[j][check]=b[p];
//			cout<<a[j][check]<<"."<<endl;
			p++;
		}
//		cout<<p<<endl;
		ngang--;
		doc--;
		check++;
	}
	
	for(int i =0 ;i<t;i++){
		for(int j = 0 ;j<t;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
//	
}
