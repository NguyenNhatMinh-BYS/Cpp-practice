#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i =0 ;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n); 
		int check=0;
		for(int i =0 ;i<n;i++){
			int x=k+a[i];
			if(binary_search(a,a+n,x)) {
//				cout<<binary_search(a,a+n,5)<<endl;
				cout<<1;
				check=1;
				break;
			}
		}
		if(check==0) cout<<-1;
		cout<<endl;
		
	}
}
