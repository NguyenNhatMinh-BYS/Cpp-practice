#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int e;
		cin>>e;
		int a[e];
		for(int i=0;i<e;i++){
			cin>>a[i];
		}
		int min =1;
		while(1){
			int check =0 ;
		
		for(int i = 0 ;i <e ;i++){
			if(a[i]==min){
				min++;
				check =1;
			}
		}
		if(check == 0) break;
		}
		cout<<min<<endl;
	}
}
